#include "lib/runtime_data_area/frame.h"

#include "lib/base/class_file/attribute_info.h"
#include "lib/base/class_file/cp_info.h"
#include "lib/base/defines.h"
#include "lib/base/structures/stack.h"

#include <stdlib.h>

void frame_initialize(Frame *frame, Stack *operand_stack, cp_info *constant_pool, Code_attribute code,
                      Stack *stack_frame)
{
    frame->constant_pool = constant_pool;
    frame->local_variables = NULL;

    stack_initialize(operand_stack);
    frame->operand_stack = operand_stack;

    if (code.max_locals != 0)
    {
        frame->local_variables = (void **)malloc(code.max_locals);
    }

    if (!stack_is_empty(stack_frame))
    {
        Node *current_node = stack_frame->top;
        for (u2 local_index; local_index < code.max_locals; ++local_index)
        {
            frame->local_variables[local_index] = (void *)current_node->data;
            current_node = current_node->next;
        }
    }
}

void frame_free(Frame *frame)
{
    free(frame->local_variables);
}