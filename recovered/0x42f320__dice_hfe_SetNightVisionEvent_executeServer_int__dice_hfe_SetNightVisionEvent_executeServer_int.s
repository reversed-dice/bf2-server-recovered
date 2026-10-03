.intel_syntax noprefix
.text
.globl _ZN4dice3hfe20SetNightVisionEvent13executeServerEi
_ZN4dice3hfe20SetNightVisionEvent13executeServerEi:
    mov qword ptr [rsp - 0x10], rbx
    mov qword ptr [rsp - 0x8], rbp
    sub rsp, 0x18
    mov rbp, rdi
    mov rdi, qword ptr [0x010c5420]
    mov ebx, esi
    mov esi, dword ptr [0x00c76024]
    mov rax, qword ptr [rdi]
    call qword ptr [rax + 0x18]
    test rax, rax
    jz .L_return_zero
    mov esi, dword ptr [rbp + 0x10]
    cmp esi, ebx
    jz .L_success
.L_return_zero:
    mov rbx, qword ptr [rsp + 0x8]
    mov rbp, qword ptr [rsp + 0x10]
    xor eax, eax
    add rsp, 0x18
    ret
.L_success:
    mov rdi, qword ptr [0x0112ee38]
    mov rax, qword ptr [rdi]
    call qword ptr [rax + 0x40]
    test rax, rax
    mov rcx, rax
    jz .L_return_zero
    mov rax, qword ptr [rax]
    movzx esi, byte ptr [rbp + 0x14]
    xor edx, edx
    mov rdi, rcx
    call qword ptr [rax + 0x5b8]
    mov rbx, qword ptr [rsp + 0x8]
    mov rbp, qword ptr [rsp + 0x10]
    mov eax, 0x1
    add rsp, 0x18
    ret
// REVERSED_FUNCTION: dice_hfe_SetNightVisionEvent_executeServer_int (0x42f320)