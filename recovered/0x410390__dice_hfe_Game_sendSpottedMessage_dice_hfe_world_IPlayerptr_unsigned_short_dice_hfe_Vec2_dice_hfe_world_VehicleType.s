.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game100sendSpottedMessage_dice_hfe_world_IPlayerptr_unsigned_short_dice_hfe_Vec2_dice_hfe_world_VehicleType
_ZN4dice3hfe4Game100sendSpottedMessage_dice_hfe_world_IPlayerptr_unsigned_short_dice_hfe_Vec2_dice_hfe_world_VehicleType:
MOV qword ptr [RSP + -0x30],RBX
MOV qword ptr [RSP + -0x20],R12
MOV RBX,RSI
MOV qword ptr [RSP + -0x28],RBP
MOV qword ptr [RSP + -0x18],R13
MOV R12,RCX
MOV qword ptr [RSP + -0x10],R14
MOV qword ptr [RSP + -0x8],R15
SUB RSP,0x38
TEST RSI,RSI
MOV dword ptr [RSP],R8D
MOV word ptr [RSP + 0x6],DX
JZ .Lb3
MOV RAX,qword ptr [RSI]
MOV RDI,RSI
CALL qword ptr [RAX + 0x148]
TEST RAX,RAX
JZ .Lb1
MOV RAX,qword ptr [RBX]
MOV RDI,RBX
CALL qword ptr [RAX + 0x148]
MOV RDI,RAX
MOV RAX,qword ptr [RAX]
CALL qword ptr [RAX + 0x1b0]
TEST RAX,RAX
JZ .Lb1
MOV EBP,dword ptr [RAX + 0x8]
.Lb0:
MOV RAX,qword ptr [RBX]
MOV RDI,RBX
CALL qword ptr [RAX + 0x1d0]
MOV RDI,qword ptr [0x010b8c08]
MOV R14D,EAX
MOV R15D,dword ptr [R12 + 0x4]
MOV R13D,dword ptr [R12]
MOV RAX,qword ptr [RDI]
CALL qword ptr [RAX + 0x278]
TEST AL,AL
JZ .Lb2
MOV EDI,0x28
CALL 0x00407508
MOV RBX,RAX
MOV RDI,RAX
CALL 0x00439b10
MOV qword ptr [RBX],0xb2e130
MOV word ptr [RBX + 0x10],BP
LEA RAX,[RBX + 0x10]
MOVZX EDX,word ptr [RSP + 0x6]
MOV RCX,RBX
XOR ESI,ESI
MOV byte ptr [RAX + 0x4],R14B
MOV word ptr [RAX + 0x2],DX
MOV dword ptr [RBX + 0x18],R13D
MOV dword ptr [RBX + 0x1c],R15D
MOV EDX,dword ptr [RSP]
MOV dword ptr [RAX + 0x14],0x2b
MOV dword ptr [RAX + 0x10],EDX
MOV RDI,qword ptr [0x010b3730]
MOV EDX,0xf
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV R12,qword ptr [RSP + 0x18]
MOV R13,qword ptr [RSP + 0x20]
MOV RAX,qword ptr [RDI]
MOV R14,qword ptr [RSP + 0x28]
MOV R15,qword ptr [RSP + 0x30]
MOV R11,qword ptr [RAX + 0x38]
ADD RSP,0x38
JMP R11
.Lb1:
XOR EBP,EBP
JMP .Lb0
.Lb2:
MOV RAX,qword ptr [0x010c5420]
MOV EDI,0x28
MOV RAX,qword ptr [RAX]
MOV R12,qword ptr [RAX + 0x120]
CALL 0x00407508
MOV RBX,RAX
MOV RDI,RAX
CALL 0x00439b10
MOV qword ptr [RBX],0xb2e130
MOV word ptr [RBX + 0x10],BP
LEA RAX,[RBX + 0x10]
MOVZX EDX,word ptr [RSP + 0x6]
MOV R11,R12
MOV ESI,0xffffffff
MOV byte ptr [RAX + 0x4],R14B
MOV word ptr [RAX + 0x2],DX
MOV dword ptr [RBX + 0x18],R13D
MOV dword ptr [RBX + 0x1c],R15D
MOV EDX,dword ptr [RSP]
MOV dword ptr [RAX + 0x14],0x2b
MOV dword ptr [RAX + 0x10],EDX
MOV RDX,RBX
MOV RDI,qword ptr [0x010c5420]
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV R12,qword ptr [RSP + 0x18]
MOV R13,qword ptr [RSP + 0x20]
MOV R14,qword ptr [RSP + 0x28]
MOV R15,qword ptr [RSP + 0x30]
ADD RSP,0x38
JMP R11
.Lb3:
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV R12,qword ptr [RSP + 0x18]
MOV R13,qword ptr [RSP + 0x20]
MOV R14,qword ptr [RSP + 0x28]
MOV R15,qword ptr [RSP + 0x30]
ADD RSP,0x38
RET
