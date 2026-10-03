.intel_syntax noprefix
.text
.globl dice_hfe_anonymous_namespace_findFirstRealNetworkable_dice_hfe_world_IObjectptr
dice_hfe_anonymous_namespace_findFirstRealNetworkable_dice_hfe_world_IObjectptr:
    test rdi, rdi
    push rbx
    mov rbx, rdi
    jz .L1
    nop
    nop
.L2:
    mov rax, qword ptr [rbx]
    mov rdi, rbx
    call qword ptr [rax + 0x1b0]
    test rax, rax
    jz .L3
    mov rax, qword ptr [rbx]
    mov rdi, rbx
    call qword ptr [rax + 0x1b0]
    cmp word ptr [rax + 0x8], 0x0
    jnz .L4
.L3:
    mov rbx, qword ptr [rbx + 0x50]
    test rbx, rbx
    jnz .L2
.L1:
    xor ebx, ebx
.L4:
    mov rax, rbx
    pop rbx
    ret
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_findFirstRealNetworkable_dice_hfe_world_IObjectptr (0x430660)