.intel_syntax noprefix
.text
.globl _ZN4dice3hfe23RemoveSpawnGroupEvent13executeClientEv
_ZN4dice3hfe23RemoveSpawnGroupEvent13executeClientEv:
PUSH RBX
MOV RBX,RDI
MOV RDI,qword ptr [0x010c5420]
MOV ESI,dword ptr [0x00c76020]
MOV RAX,qword ptr [RDI]
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
JZ .Lret0
MOV RDI,qword ptr [0x010c42c0]
TEST RDI,RDI
JZ .Lret0
MOV RAX,qword ptr [RDI]
MOVZX ESI,byte ptr [RBX + 0x10]
CALL qword ptr [RAX + 0x98]
POP RBX
MOV EAX,0x1
RET
.Lret0:
POP RBX
XOR EAX,EAX
RET
// REVERSED_FUNCTION: dice_hfe_RemoveSpawnGroupEvent_executeClient (0x42e1b0)