.intel_syntax noprefix
.text
.globl _ZN16dice_hfe16ClientConnection9setPlayerEPN16dice_hfe4world8IPlayerE
_ZN16dice_hfe16ClientConnection9setPlayerEPN16dice_hfe4world8IPlayerE:
MOV qword ptr [RSP + -0x10],RBX
MOV qword ptr [RSP + -0x8],RBP
MOV RBX,RDI
SUB RSP,0x18
MOV RDI,qword ptr [RDI + 0x30]
MOV RBP,RSI
MOV qword ptr [RBX + 0x10],RSI
TEST RDI,RDI
JZ 0x00436296
CALL 0x0044caf0
MOV RDI,qword ptr [RBX + 0x40]
TEST RDI,RDI
JZ 0x004362b5
MOV RSI,RBP
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
ADD RSP,0x18
JMP 0x004422f0
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
ADD RSP,0x18
RET
// REVERSED_FUNCTION: dice_hfe_ClientConnection_setPlayer_dice_hfe_world_IPlayerptr (0x436270)