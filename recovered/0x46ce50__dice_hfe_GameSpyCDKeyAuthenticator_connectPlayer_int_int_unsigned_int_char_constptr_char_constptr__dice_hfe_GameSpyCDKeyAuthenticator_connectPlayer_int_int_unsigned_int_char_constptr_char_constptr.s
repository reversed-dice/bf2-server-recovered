.intel_syntax noprefix
.text
.globl _ZN4dice3hfe26GameSpyCDKeyAuthenticator13connectPlayerEiijPKcS_
_ZN4dice3hfe26GameSpyCDKeyAuthenticator13connectPlayerEiijPKcS_:
    mov rax, rdi
    sub rsp, 0x18
    mov r10d, esi
    cmp BYTE PTR [rax+0x18], 0x0
    mov edi, edx
    mov esi, ecx
    mov rdx, r9
    mov rcx, r8
    jz 0x46ce91
    mov r8, rdx
    mov r9d, 0x46cd50
    mov edx, esi
    mov esi, edi
    mov edi, r10d
    mov QWORD PTR [rsp+0x8], rax
    mov QWORD PTR [rsp], 0x46cdd0
    call 0x8151b0
    add rsp, 0x18
    ret
    mov rdx, QWORD PTR [rax+0x10]
    mov r11, QWORD PTR [rax+0x8]
    xor esi, esi
    add rsp, 0x18
    jmp r11
// REVERSED_FUNCTION: dice_hfe_GameSpyCDKeyAuthenticator_connectPlayer_int_int_unsigned_int_char_constptr_char_constptr (0x46ce50)