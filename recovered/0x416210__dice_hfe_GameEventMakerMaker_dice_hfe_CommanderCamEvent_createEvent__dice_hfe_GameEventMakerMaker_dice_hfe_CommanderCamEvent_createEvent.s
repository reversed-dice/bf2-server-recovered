.intel_syntax noprefix
.text
.globl _ZN4dice3hfe18GameEventMakerMaker9createEventEv
_ZN4dice3hfe18GameEventMakerMaker9createEventEv:
push rbx
mov edi, 0x20
call 0x00407508
mov rbx, rax
mov rdi, rax
call 0x00439b10
lea rdx, [rbx + 0x10]
xor eax, eax
mov qword ptr [rbx], 0xb2b8b0
mov dword ptr [rbx + 0x10], eax
mov dword ptr [rdx + 0x4], eax
mov dword ptr [rdx + 0x8], eax
mov rax, rbx
pop rbx
ret
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_CommanderCamEvent_createEvent (0x416210)