.intel_syntax noprefix
.text
.globl _ZN4dice3hfe5world21ItemContainerTemplateC1Ev
_ZN4dice3hfe5world21ItemContainerTemplateC1Ev:
PUSH RBX
MOV RBX,RDI
CALL _ZN4dice3hfe5world14BundleTemplateC1Ev
LEA RAX,[RBX + 0x218]
MOV qword ptr [RBX],0xb44150
MOV qword ptr [RBX + 0x10],0xb44400
MOV qword ptr [RBX + 0x68],0xb44438
MOV qword ptr [RBX + 0x1c8],0xb444b8
MOV qword ptr [RBX + 0x1f8],0xb44520
MOV dword ptr [RBX + 0x200],0x1
MOV dword ptr [RBX + 0x204],0x0
MOV dword ptr [RBX + 0x208],0xffffffff
MOV dword ptr [RBX + 0x20c],0xffffffff
MOV dword ptr [RBX + 0x210],0x0
MOV qword ptr [RBX + 0x218],RAX
MOV qword ptr [RAX + 0x8],RAX
POP RBX
RET
// REVERSED_FUNCTION: dice_hfe_world_ItemContainerTemplate_ItemContainerTemplate (0x524b70)