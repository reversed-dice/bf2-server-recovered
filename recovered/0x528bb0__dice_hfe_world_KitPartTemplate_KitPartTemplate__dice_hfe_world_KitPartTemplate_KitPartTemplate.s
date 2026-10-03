.intel_syntax noprefix
.text
.globl _ZN4dice3hfe5world16KitPartTemplateC1Ev
_ZN4dice3hfe5world16KitPartTemplateC1Ev:
push rbx
mov rbx, rdi
call _ZN4dice3hfe5world14BundleTemplateC2Ev
lea rax, [rbx + 0x1f8]
lea rdx, [rbx + 0x200]
mov qword ptr [rbx], 0xb453d0
mov qword ptr [rbx + 0x10], 0xb45688
mov qword ptr [rbx + 0x68], 0xb456c0
mov qword ptr [rbx + 0x1c8], 0xb45740
mov qword ptr [rax + 0x8], 0
mov qword ptr [rax + 0x28], 0
mov dword ptr [rax + 0x8], 0
mov qword ptr [rax + 0x10], 0
mov qword ptr [rax + 0x18], rdx
mov qword ptr [rax + 0x20], rdx
mov dword ptr [rbx + 0x228], -1
mov dword ptr [rbx + 0x22c], 1
pop rbx
ret
// REVERSED_FUNCTION: dice_hfe_world_KitPartTemplate_KitPartTemplate (0x528bb0)