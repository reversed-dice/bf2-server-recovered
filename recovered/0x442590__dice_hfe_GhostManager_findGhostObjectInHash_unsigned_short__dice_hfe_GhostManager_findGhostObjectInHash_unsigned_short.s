.intel_syntax noprefix
.text
.globl _ZN4dice3hfe13GhostManager20findGhostObjectInHashEt
_ZN4dice3hfe13GhostManager20findGhostObjectInHashEt:
    TEST SI,SI
    JZ .Lreturn0
    MOVZX ECX,SI
    XOR EDX,EDX
    MOV EAX,ECX
    DIV DWORD PTR [RDI + 0x30]
    MOV RAX, QWORD PTR [RDI + 0x28]
    MOV EDX,EDX
    MOV RAX, QWORD PTR [RAX + RDX*8]
    TEST RAX,RAX
    JNZ .Lcheck
    JMP .Lreturn0
.Ladvance:
    MOV RAX, QWORD PTR [RAX]
    TEST RAX,RAX
    JZ .Lreturn0
.Lcheck:
    CMP ECX, DWORD PTR [RAX + 8]
    NOP
    NOP
    JNZ .Ladvance
    MOV RAX, QWORD PTR [RAX + 0x10]
    RET
.Lreturn0:
    XOR EAX,EAX
    RET
// REVERSED_FUNCTION: dice_hfe_GhostManager_findGhostObjectInHash_unsigned_short (0x442590)