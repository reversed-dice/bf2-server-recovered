.intel_syntax noprefix
.text
.globl _ZN4dice3hfe9GameLogic18ClearDropVehiclesEv
_ZN4dice3hfe9GameLogic18ClearDropVehiclesEv:
    push rbx
    mov rbx, rdi
    lea rdi, [rdi + 0x338]
    mov rax, [rbx + 0x338]
    xor ecx, ecx
    xor esi, esi
    mov rdx, [rax - 0x18]
    call _ZNSs9_M_mutateEmmm
    mov rax, [rbx + 0x340]
    lea rdi, [rbx + 0x340]
    xor ecx, ecx
    pop rbx
    xor esi, esi
    mov rdx, [rax - 0x18]
    jmp _ZNSs9_M_mutateEmmm
// REVERSED_FUNCTION: dice_hfe_GameLogic_ClearDropVehicles (0x476ec0)