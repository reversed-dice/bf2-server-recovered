.intel_syntax noprefix
.text
.globl _ZN4dice2hfe10GameServer28simulatePlayersCollisionsEf
_ZN4dice2hfe10GameServer28simulatePlayersCollisionsEf:
mov qword ptr [rsp-0x20], rbx
mov qword ptr [rsp-0x18], rbp
mov qword ptr [rsp-0x10], r12
mov qword ptr [rsp-0x8], r13
sub rsp, 0x28
mov r13, rdi
mov rdi, qword ptr [rip+0x0112ee38]
movss dword ptr [rsp+0x4], xmm0
mov r12d, dword ptr [rsp+0x4]
mov rax, qword ptr [rdi]
call qword ptr [rax+0x78]
mov rbx, qword ptr [rax]
mov rbp, rax
cmp rbx, rax
je .Lexit
nop
.Lloop:
mov rsi, qword ptr [rbx+0x10]
mov dword ptr [rsp+0x4], r12d
mov rdi, r13
movss xmm0, dword ptr [rsp+0x4]
call _ZN4dice2hfe10GameServer23simulatePlayerCollisionsEPvf
mov rbx, qword ptr [rbx]
cmp rbx, rbp
jne .Lloop
.Lexit:
mov rbx, qword ptr [rsp+0x8]
mov rbp, qword ptr [rsp+0x10]
mov r12, qword ptr [rsp+0x18]
mov r13, qword ptr [rsp+0x20]
add rsp, 0x28
ret

// REVERSED_FUNCTION: dice_hfe_GameServer_simulatePlayersCollisions_float (0x4543e0)