.intel_syntax noprefix
.text
.globl _ZN4dice3hfe5world21CommanderToolsManagerC1Ev
_ZN4dice3hfe5world21CommanderToolsManagerC1Ev:
    mov QWORD PTR [rsp-0x18], rbx
    lea rbx, [rdi+0x8]
    mov QWORD PTR [rsp-0x10], rbp
    mov QWORD PTR [rsp-0x8], r12
    mov ebp, 0x1
    sub rsp, 0x18
    mov r12, rdi
    mov QWORD PTR [rdi], 0xb33280
.L_loop:
    mov rdi, rbx
    dec rbp
    add rbx, 0x38
    call sub_473e90
    cmp rbp, -0x1
    jne .L_loop
    cmp QWORD PTR [0x0108caa8], 0
    je .L_else
.L_epilogue:
    xor eax, eax
    mov rbx, QWORD PTR [rsp]
    mov rbp, QWORD PTR [rsp+0x8]
    mov QWORD PTR [r12+0x78], rax
    mov QWORD PTR [r12+0x80], rax
    mov QWORD PTR [r12+0x88], rax
    mov r12, QWORD PTR [rsp+0x10]
    add rsp, 0x18
    ret
.L_else:
    mov rdi, QWORD PTR [0x010b3730]
    xor ecx, ecx
    mov rdx, r12
    xor esi, esi
    mov rax, QWORD PTR [rdi]
    call QWORD PTR [rax+0x58]
    mov QWORD PTR [0x0108caa8], r12
    jmp .L_epilogue
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolsManager_CommanderToolsManager (0x473eb0)