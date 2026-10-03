.intel_syntax noprefix
.text
.globl _ZNK4dice3hfe7BanList12isKeyBannedERKSs
_ZNK4dice3hfe7BanList12isKeyBannedERKSs:
push rbx
mov rbx, rdi
call 0x452f10
lea rdx, [rbx+0x8]
pop rbx
cmp rdx, rax
setnz al
movzx eax, al
ret
// REVERSED_FUNCTION: dice_hfe_BanList_isKeyBanned_std_string_constref_const (0x4501b0)