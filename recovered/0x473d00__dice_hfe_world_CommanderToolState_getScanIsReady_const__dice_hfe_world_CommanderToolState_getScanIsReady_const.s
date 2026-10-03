.intel_syntax noprefix
.text
.globl _ZN4dice3hfe5world19CommanderToolState14getScanIsReadyEKv
_ZN4dice3hfe5world19CommanderToolState14getScanIsReadyEKv:
    mov edx, DWORD PTR [rdi+0x30]
    test edx, edx
    jz .L0
    xorps xmm0, xmm0
    ucomiss xmm0, DWORD PTR [rdi+0x24]
    jnc .L0
    xor eax, eax
    ucomiss xmm0, DWORD PTR [rdi+0xc]
    setnc al
    ret
.L0:
    xor eax, eax
    ret
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolState_getScanIsReady_const (0x473d00)