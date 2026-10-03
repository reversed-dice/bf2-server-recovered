.intel_syntax noprefix
.text
.globl _ZN4dice3hfe9GameLogic15resetAllPlayersEv
_ZN4dice3hfe9GameLogic15resetAllPlayersEv:
push rbp
push rbx
sub rsp, 0x8
mov rdi, qword ptr [0x0112ee38]
mov rax, qword ptr [rdi]
call qword ptr [rax + 0x78]
mov rbx, qword ptr [rax]
mov rbp, rax
cmp rbx, rax
jz .L_done
nop
.L_loop:
mov rdi, qword ptr [rbx + 0x10]
mov rax, qword ptr [rdi]
call qword ptr [rax + 0x338]
mov rbx, qword ptr [rbx]
cmp rbx, rbp
jnz .L_loop
.L_done:
add rsp, 0x8
pop rbx
pop rbp
ret
// REVERSED_FUNCTION: dice_hfe_GameLogic_resetAllPlayers (0x476120)