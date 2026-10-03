.intel_syntax noprefix
.text
.globl _ZN4dice3hfe10GameServer13updatePortalsEf
_ZN4dice3hfe10GameServer13updatePortalsEf:
PUSH RBX
SUB RSP,0x10
MOV RDI,QWORD PTR [0x010ae0c0]
MOVSS DWORD PTR [RSP+0xc],XMM0
MOV EBX,DWORD PTR [RSP+0xc]
TEST RDI,RDI
JZ _ZN4dice3hfe10GameServer13updatePortalsEf_return
MOV RAX,QWORD PTR [RDI]
CALL QWORD PTR [RAX+0x38]
TEST AL,AL
JNZ _ZN4dice3hfe10GameServer13updatePortalsEf_tail
_ZN4dice3hfe10GameServer13updatePortalsEf_return:
ADD RSP,0x10
POP RBX
RET
_ZN4dice3hfe10GameServer13updatePortalsEf_tail:
MOV RDI,QWORD PTR [0x01133c00]
MOV RAX,QWORD PTR [RDI]
MOV DWORD PTR [RSP+0xc],EBX
MOVSS XMM0,DWORD PTR [RSP+0xc]
MOV R11,QWORD PTR [RAX+0x80]
ADD RSP,0x10
POP RBX
JMP R11
// REVERSED_FUNCTION: dice_hfe_GameServer_updatePortals_float (0x454090)