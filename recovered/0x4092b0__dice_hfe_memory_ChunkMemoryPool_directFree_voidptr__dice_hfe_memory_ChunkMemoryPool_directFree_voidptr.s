.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory15ChunkMemoryPool10directFreeEPv
_ZN4dice3hfe6memory15ChunkMemoryPool10directFreeEPv:
mov rax, [rdi+0x28]
mov [rsi], rax
dec dword ptr [rdi+0x30]
mov [rdi+0x28], rsi
ret