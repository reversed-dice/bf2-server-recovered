.intel_syntax noprefix
.text
.globl _ZNK4dice3hfe5world19CommanderToolState14getUAVIsReadyEv
_ZNK4dice3hfe5world19CommanderToolState14getUAVIsReadyEv:
    mov eax, dword ptr [rdi + 0x2c]
    test eax, eax
    jz .Lret_false
    xorps xmm0, xmm0
    ucomiss xmm0, dword ptr [rdi + 0x20]
    jnc .Lret_false
    xor eax, eax
    ucomiss xmm0, dword ptr [rdi + 0x4]
    setnc al
    ret
.Lret_false:
    xor eax, eax
    ret
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolState_getUAVIsReady_const (0x473cd0)