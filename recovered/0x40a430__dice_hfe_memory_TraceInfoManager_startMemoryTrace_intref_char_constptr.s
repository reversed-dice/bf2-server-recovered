.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory16TraceInfoManager16startMemoryTraceERiPKc
_ZN4dice3hfe6memory16TraceInfoManager16startMemoryTraceERiPKc:
	mov	QWORD PTR [rsp-0x8],rbp
	mov	QWORD PTR [rsp-0x10],rbx
	sub	rsp,0x18
	cmp	DWORD PTR [0xf66ab8],0x7f
	mov	rbp,rdi
	mov	rcx,rsi
	jg	.Lret
	mov	eax,DWORD PTR [rdi]
	cmp	eax,-0x1
	je	.Lgetid
.Lcheck:
	cmp	eax,0x7ff
	jbe	.Lstore
.Lret:
	mov	rbx,QWORD PTR [rsp+0x8]
	mov	rbp,QWORD PTR [rsp+0x10]
	add	rsp,0x18
	ret
.Lstore:
	mov	ebx,DWORD PTR [0xf66ab8]
	inc	ebx
	mov	DWORD PTR [0xf66ab8],ebx
	mov	eax,DWORD PTR [rbp]
	movsxd	rbx,ebx
	mov	DWORD PTR [0xf89540+rbx*8],eax
	call	get_current_thread_id
	mov	rbp,QWORD PTR [rsp+0x10]
	mov	DWORD PTR [0xf89544+rbx*8],eax
	mov	rbx,QWORD PTR [rsp+0x8]
	add	rsp,0x18
	ret
.Lgetid:
	mov	edx,0xf85520
	mov	esi,0xf85540
	mov	rdi,rcx
	call	getIdentifier
	test	eax,eax
	mov	DWORD PTR [rbp],eax
	jns	.Lcheck
	jmp	.Lret
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager_startMemoryTrace_intref_char_constptr (0x40a430)