#include "lib/runtime_data_area/method_area.h"
#include "lib/base/class_file/method_info.h"
#include "lib/base/structures/stack.h"
#include "lib/environment/jvm_debug.h"
#include "lib/interpreter/byte_code_array.h"
#include "lib/runtime_data_area/frame.h"

#include <malloc.h>
#include <string.h>

#ifdef JVM_WINDOWS
#include <windows.h>
#endif

void method_area_call_method(method_info *method, cp_info *constant_pool, Stack *stack_frame,
                             ClassFileList *loaded_classes, JVMObject *object /*NULL*/)
{
    char method_name[400];
    if (JVM_DEBUG_MODE_ACTIVE)
    {
        u2 method_name_index = method->name_index;
        get_utf8_value(method_name_index - 1, constant_pool, method_name);
        jvm_debug_print("\n\t[Calling %s]\n", method_name);
    }

    MethodData method_data;
    method_data.method = method;
    method_data.loaded_classes = loaded_classes;
    method_data.pc = 0;
    method_data.code = method->attributes->info.code;
    method_data.object = object;

    Frame new_frame;
    Stack operand_stack;
    frame_initialize(&new_frame, &operand_stack, constant_pool, method->attributes->info.code, stack_frame);
    stack_push(stack_frame, &new_frame);

    method_data.frame_stack = stack_frame;
    // Executing Code
    for (method_data.pc = 0; method_data.pc < method_data.code.code_length; method_data.pc++)
    {
        u2 opcode = method_data.code.code[method_data.pc];

        jvm_debug_print("\t%d: ", method_data.pc);
#ifdef JVM_WINDOWS
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        jvm_debug_print("%s ", opcode_names[opcode]);
        SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#else
        jvm_debug_print("\033[1;33m%s\033[0m ", opcode_names[opcode]);
#endif
        jvm_debug_print("(0x%02x)\n", opcode);

        u2 current_opcode = method_data.code.code[method_data.pc];

        jvm_opcodes[current_opcode](&method_data);
    }

    frame_free(&new_frame);
    if (!stack_is_empty(stack_frame))
    {
        stack_frame->top = stack_frame->top->next;
        // stack_pop(stack_frame); // TODO: Enable again
    }

    if (JVM_DEBUG_MODE_ACTIVE)
    {
        jvm_debug_print("\t[Exiting from %s]\n", method_name);
    }
}

method_info *method_area_search_method(const char *method, ClassFile *class)
{
    for (u2 method_index = 0; method_index < class->methods_count; method_index++)
    {
        u2 name_index = class->methods[method_index].name_index;

        char method_name[200];
        get_utf8_value(name_index - 1, class->constant_pool, method_name);

        if (strcmp(method_name, method) == 0)
        {
            return &class->methods[method_index];
        }
    }

    return NULL;
}
