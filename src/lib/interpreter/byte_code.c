#include "lib/interpreter/byte_code.h"

// Functions for the opcode.

// 0x00
void nop() {
  // Nao faz nada.
}
// 0x01
void aconst_null() {
  // Colocar a referencia de objeto "NULL" na pilha de operandos.
  // Observacao: a JVM nao obriga um valor concreto para "NULL".
}
// 0x02
void iconst_m1() {
  // Colocar a constante inteira -1 na pilha de operandos.
}
// 0x03
void iconst_0() {
  // Colocar a constante inteira 0 na pilha de operandos.
}
// 0x04
void iconst_1() {
  // Colocar a constante inteira 1 na pilha de operandos.
}
// 0x05
void iconst_2() {
  // Colocar a constante inteira 2 na pilha de operandos.
}
// 0x06
void iconst_3() {
  // Colocar a constante interia 3 na pilha de operandos.
}
// 0x07
void iconst_4() {
  // Colocar a constante inteira 4 na pilha de operandos.
}
// 0x08
void iconst_5() {
  // Colocar a constante inteira 5 na pilha de operandos.
}
// 0x09
void lconst_0() {
  // Colocar a constante long 0 na pilha de operandos.
  // Usa 2 espacos na pilha.
}
// 0x0A
void lconst_1() {
  // Colocar a constante long 1 na pilha de operandos.
  // Usa 2 espacos na pilha.
}
// 0x0B
void fconst_0() {
  // Colocar a constante float 0.0 na pilha de operandos.
}
// 0x0C
void fconst_1() {
  // Colocar a constante float 1.0 na pilha de operandos.
}
// 0x0D
void fconst_2() {
  // Colocar a constante float 2.0 na pilha de operandos.
}
// 0x0E
void dconst_0() {
  // Colocar a constante double 0.0 na pilha de operandos.
  // Usa 2 espacos na pilha.
}
// 0x0F
void dconst_1() {
 // Colocar a constante double 1.0 na pilha de operandos.
 // Usa 2 espacos na pilha.
}
// 0x10
void bipush() {
  
}
// 0x11
void sipush() {
  
}
// 0x12
void ldc() {
  
}
// 0x13
void ldc_w() {
  
}
// 0x14
void ldc2_w() {
  
}
// 0x15
void iload() {
  
}
// 0x16
void lload() {
  
}
// 0x17
void fload() {
  
}
// 0x18
void dload() {
  
}
// 0x19
void aload() {
  
}
// 0x1A
void iload_0() {
  
}
// 0x1B
void iload_1() {
  
}
// 0x1C
void iload_2() {
  
}
// 0x1D
void iload_3() {
  
}
// 0x1E
void lload_0() {
  
}
// 0x1F
void lload_1() {
  
}
// 0x20
void lload_2() {
  
}
// 0x21
void lload_3() {
  
}
// 0x22
void fload_0() {
  
}
// 0x23
void fload_1() {
  
}
// 0x24
void fload_2() {
  
}
// 0x25
void fload_3() {
  
}
// 0x26
void dload_0() {
  
}
// 0x27
void dload_1() {
  
}
// 0x28
void dload_2() {
  
}
// 0x29
void dload_3() {
  
}
// 0x2A
void aload_0() {
  
}
// 0x2B
void aload_1() {
  
}
// 0x2C
void aload_2() {
  
}
// 0x2D
void aload_3() {
  
}
// 0x2E
void iaload() {
  
}
// 0x2F
void laload() {
  
}
// 0x30
void faload() {
  
}
// 0x31
void daload() {
  
}
// 0x32
void aaload() {
  
}
// 0x33
void baload() {
  
}
// 0x34
void caload() {
  
}
// 0x35
void saload() {
  
}
// 0x36
void istore() {
  
}
// 0x37
void lstore() {
  
}
// 0x38
void fstore() {
  
}
// 0x39
void dstore() {
  
}
// 0x3A
void astore() {
  
}
// 0x3B
void istore_0() {
  
}
// 0x3C
void istore_1() {
  
}
// 0x3D
void istore_2() {
  
}
// 0x3E
void istore_3() {
  
}
// 0x3F
void lstore_0() {
  
}
// 0x40
void lstore_1() {
  
}
// 0x41
void lstore_2() {
  
}
// 0x42
void lstore_3() {
  
}
// 0x43
void fstore_0() {
  
}
// 0x44
void fstore_1() {
  
}
// 0x45
void fstore_2() {
  
}
// 0x46
void fstore_3() {
  
}
// 0x47
void dstore_0() {
  
}
// 0x48
void dstore_1() {
  
}
// 0x49
void dstore_2() {
  
}
// 0x4A
void dstore_3() {
  
}
// 0x4B
void astore_0() {
  
}
// 0x4C
void astore_1() {
  
}
// 0x4D
void astore_2() {
  
}
// 0x4E
void astore_3() {
  
}
// 0x4F
void iastore() {
  
}
// 0x50
void lastore() {
  
}
// 0x51
void fastore() {
  
}
// 0x52
void dastore() {
  
}
// 0x53
void aastore() {
  
}
// 0x54
void bastore() {
  
}
// 0x55
void castore() {
  
}
// 0x56
void sastore() {
  
}
// 0x57 (optional implementation?)
void pop() {
  
}
// 0x58 (optional implementation?)
void pop2() {
  
}
// 0x59 (optional implementation?)
void dup() {
  
}
// 0x5A (optional implementation?)
void dup_x1() {
  
}
// 0x5B (optional implementation?)
void dup_x2() {
  
}
// 0x5C (optional implementation?)
void dup2() {
  
}
// 0x5D (optional implementation?)
void dup2_x1() {
  
}
// 0x5E (optional implementation?)
void dup2_x2() {
  
}
// 0x5F (optional implementation?)
void swap() {
  
}
// 0x60
void iadd() {
  
}
// 0x61
void ladd() {
  
}
// 0x62
void fadd() {
  
}
// 0x63
void dadd() {
  
}
// 0x64
void isub() {
  
}
// 0x65
void lsub() {
  
}
// 0x66
void fsub() {
  
}
// 0x67
void dsub() {
  
}
// 0x68
void imul() {
  
}
// 0x69
void lmul() {
  
}
// 0x6A
void fmul() {
  
}
// 0x6B
void dmul() {
  
}
// 0x6C
void idiv() {
  
}
// 0x6D
void ldiv() {
  
}
// 0x6E
void fdiv() {
  
}
// 0x6F
void ddiv() {
  
}
// 0x70
void irem() {
  
}
// 0x71
void lrem() {
  
}
// 0x72
void frem() {
  
}
// 0x73
void drem() {
  
}
// 0x74
void ineg() {
  
}
// 0x75
void lneg() {
  
}
// 0x76
void fneg() {
  
}
// 0x77
void dneg() {
  
}
// 0x78
void ishl() {
  
}
// 0x79
void lshl() {
  
}
// 0x7A
void ishr() {
  
}
// 0x7B
void lshr() {
  
}
// 0x7C
void iushr() {
  
}
// 0x7D
void lushr() {
  
}
// 0x7E
void iand() {
  
}
// 0x7F
void land() {
  
}
// 0x80
void ior() {
  
}
// 0x81
void lor() {
  
}
// 0x82
void ixor() {
  
}
// 0x83
void lxor() {
  
}
// 0x84
void iinc() {
  
}
// 0x85
void i2l() {
  
}
// 0x86
void i2f() {
  
}
// 0x87
void i2d() {
  
}
// 0x88
void l2i() {
  
}
// 0x89
void l2f() {
  
}
// 0x8A
void l2d() {
  
}
// 0x8B
void f2i() {
  
}
// 0x8C
void f2l() {
  
}
// 0x8D
void f2d() {
  
}
// 0x8E
void d2i() {
  
}
// 0x8F
void d2l() {
  
}
// 0x90
void d2f() {
  
}
// 0x91
void i2b() {
  
}
// 0x92
void i2c() {
  
}
// 0x93
void i2s() {
  
}
// 0x94
void lcmp() {
  
}
// 0x95
void fcmpl() {
  
}
// 0x96
void fcmpg() {
  
}
// 0x97
void dcmpl() {
  
}
// 0x98
void dcmpg() {
  
}
// 0x99
void ifeq() {
  
}
// 0x9A
void ifne() {
  
}
// 0x9B
void iflt() {
  
}
// 0x9C
void ifge() {
  
}
// 0x9D
void ifgt() {
  
}
// 0x9E
void ifle() {
  
}
// 0x9F
void if_icmpeq() {
  
}
// 0xA0
void if_icmpne() {
  
}
// 0xA1
void if_icmplt() {
  
}
// 0xA2
void if_icmpge() {
  
}
// 0xA3
void if_icmpgt() {
  
}
// 0xA4
void if_icmple() {
  
}
// 0xA5
void if_acmpeg() {
  
}
// 0xA6
void if_acmpne() {
  
}
// 0xA7 ("goto" is a C keyword, hence the name)
void jvm_goto() {
  
}
// 0xA8
void jsr() {
  
}
// 0xA9
void ret() {
  
}
// 0xAA
void tableswitch() {
  
}
// 0xAB
void lookupswitch() {
  
}
// 0xAC
void ireturn() {
  
}
// 0xAD
void lreturn() {
  
}
// 0xAE
void freturn() {
  
}
// 0xAF
void dreturn() {
  
}
// 0xB0
void areturn() {
  
}
// 0xB1 ("return" is a C keyword, hence the name)
void jvm_return() {
  
}
// 0xB2
void getstatic() {
  
}
// 0xB3
void putstatic() {
  
}
// 0xB4
void getfield() {
  
}
// 0xB5
void putfield() {
  
}
// 0xB6
void invokevirtual() {
  
}
// 0xB7
void invokespecial() {
  
}
// 0xB8
void invokestatic() {
  
}
// 0xB9
void invokeinterface() {
  
}
// 0xBB (skipped 0xBA (186) - invokedynamic)
void new () {
  
}
// 0xBC
void newarray() {
  
}
// 0xBD
void anewarray() {
  
}
// 0xBE
void arraylength() {
  
}
// 0xBF (optional implementation?)
void athrow() {
  
}
// 0xC0 (optional implementation?)
void checkcast() {
  
}
// 0xC1 (optional implementation?)
void instanceof () {
  
}
// 0xC2 (optional implementation?)
void monitorenter() {
  
}
// 0xC3 (optional implementation?)
void monitorexit() {
  
}
// 0xC4
void wide() {
  
}
// 0xC5
void multianewarray() {
  
}
// 0xC6
void ifnull() {
  
}
// 0xC7
void ifnonnull() {
  
}
// 0xC8
void goto_w() {
  
}
// 0xC9
void jsr_w() {
  
}
