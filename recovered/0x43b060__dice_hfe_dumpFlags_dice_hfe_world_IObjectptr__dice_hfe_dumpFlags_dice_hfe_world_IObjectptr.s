.intel_syntax noprefix
.text
.globl dice_hfe_dumpFlags_dice_hfe_world_IObjectptr
dice_hfe_dumpFlags_dice_hfe_world_IObjectptr:
push rbx
mov esi, dword ptr [0x00c965a8]
mov rbx, rdi
mov rax, qword ptr [rdi]
mov edx, esi
call qword ptr [rax + 0xb8]
mov rax, qword ptr [rbx]
mov rdi, rbx
call qword ptr [rax + 0x1e0]
test rax, rax
mov rbx, rax
jz .L_exit
nop
nop
.L_loop:
mov rdi, rbx
call dice_hfe_dumpFlags_dice_hfe_world_IObjectptr
mov rbx, qword ptr [rbx + 0x58]
test rbx, rbx
jnz .L_loop
.L_exit:
pop rbx
ret
// REVERSED_FUNCTION: dice_hfe_dumpFlags_dice_hfe_world_IObjectptr (0x43b060)