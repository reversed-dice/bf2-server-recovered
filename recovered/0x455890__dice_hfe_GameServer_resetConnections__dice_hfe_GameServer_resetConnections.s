.intel_syntax noprefix
.text
.globl _ZN4dice3hfe11GameServer17resetConnectionsEv
_ZN4dice3hfe11GameServer17resetConnectionsEv:
    PUSH RBP
    LEA RBP,[RDI + 0xf0]
    PUSH RBX
    SUB RSP,0x8
    MOV RAX,qword ptr [RDI + 0x100]
    CMP RAX,RBP
    JZ .Lend
    MOV RBX,RAX
    NOP
.Lloop:
    MOV RAX,qword ptr [RAX + 0x28]
    MOV byte ptr [RAX + 0x1c],0x0
    MOV RAX,qword ptr [RBX + 0x28]
    MOV RDI,qword ptr [RAX + 0x40]
    CALL 0x4447b0
    MOV RDI,RBX
    CALL 0x407ef8
    CMP RAX,RBP
    MOV RBX,RAX
    JNZ .Lloop
.Lend:
    ADD RSP,0x8
    POP RBX
    POP RBP
    RET
// REVERSED_FUNCTION: dice_hfe_GameServer_resetConnections (0x455890)