.intel_syntax noprefix
.text
.globl _ZN4dice3hfe10GameServer24simulatePlayersPhysicsEf
_ZN4dice3hfe10GameServer24simulatePlayersPhysicsEf:
push r13
mov r13,rdi
push r12
push rbp
push rbx
sub rsp,0x8
mov rdi,[0x0112ee38]
movss [rsp+0x4],xmm0
mov r12d,[rsp+0x4]
mov rax,[rdi]
call [rax+0x78]
mov rbp,rax
mov rax,[rax]
cmp rax,rbp
je 0x4543c7
mov rbx,rax
jmp 0x4543a8
mov rax,rbx
mov rsi,[rax+0x10]
mov [rsp+0x4],r12d
mov rdi,r13
movss xmm0,[rsp+0x4]
call 0x453aa0
mov rbx,[rbx]
cmp rbx,rbp
jne 0x4543a5
add rsp,0x8
mov eax,0x1
pop rbx
pop rbp
pop r12
pop r13
ret
// REVERSED_FUNCTION: dice_hfe_GameServer_simulatePlayersPhysics_float (0x454370)