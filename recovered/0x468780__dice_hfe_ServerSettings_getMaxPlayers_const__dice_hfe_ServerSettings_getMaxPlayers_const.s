.intel_syntax noprefix
.text
.globl _ZNK4dice3hfe14ServerSettings13getMaxPlayersEv
_ZNK4dice3hfe14ServerSettings13getMaxPlayersEv:
    cmp byte ptr [rdi + 0x145], 0x0
    jz .L_skip
    mov eax, dword ptr [rdi + 0x7c]
    cmp eax, 0x10
    jle .L_ret16
    ret
.L_ret16:
    mov eax, 0x10
    ret
.L_skip:
    mov eax, dword ptr [rdi + 0x7c]
    ret
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getMaxPlayers_const (0x468780)