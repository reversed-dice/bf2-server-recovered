.intel_syntax noprefix
.text
.globl _ZN4dice3hfe20DestroyObjectEvent11deSerializeEPNS2_2io8BitStreamE
_ZN4dice3hfe20DestroyObjectEvent11deSerializeEPNS2_2io8BitStreamE:
MOV qword ptr [RSP + -0x10],RBX
MOV qword ptr [RSP + -0x8],RBP
SUB RSP,0x28
MOV RBP,RSI
LEA RSI,[RSP + 0x14]
MOV RBX,RDI
MOV EDX,0x10
MOV RDI,RBP
MOV dword ptr [RSP + 0x14],0x0
CALL 0x0079e920
MOV EAX,dword ptr [RSP + 0x14]
MOV word ptr [RBX + 0x10],AX
CMP byte ptr [RBP + 0x20],0x0
MOV EAX,0x1
JZ 0x0042501e
MOV dword ptr [RBP + 0x24],0x0
MOV byte ptr [RBP + 0x20],0x0
XOR AL,AL
MOV RBX,qword ptr [RSP + 0x18]
MOV RBP,qword ptr [RSP + 0x20]
ADD RSP,0x28
RET
// REVERSED_FUNCTION: dice_hfe_DestroyObjectEvent_deSerialize_dice_hfe_io_BitStreamptr (0x424fd0)