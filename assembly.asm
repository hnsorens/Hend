	section	.text
	default rel
	extern printf
	global	main
function_printNum:
	push	rbp
	mov	rbp,	rsp
	mov	rdi,	num_fmt
	mov	rsi,	[rbp + 16]
	mov	rax,	0
	call	printf	wrt	..plt
	pop	rbp
	mov	rax,	1
	ret
main:
	push	rbp
	mov	rbp,	rsp
	sub	rsp,	48
	mov	rbx,	10
	mov	dword [rbp - 8],	ebx
	push	qword	0
	mov	ebx,	dword [rbp - 8]
	push	rbx
	call	function_printNum
	mov	rbx,	rax
	mov	r10,	0
	cmp	r10,	1
	jne	else_if_L1
	mov	r10,	1123
	mov	dword [rbp - 44],	r10d
	push	qword	0
	mov	r10d,	dword [rbp - 8]
	push	r10
	mov	r10,	10
	push	r10
	call	function_add
	mov	r10,	rax
	push	r10
	call	function_printNum
	mov	r10,	rax
	jmp	end_L0
else_if_L1:
	mov	r11,	0
	cmp	r11,	1
	jne	else_if_L2
	push	qword	0
	mov	r11,	134
	push	r11
	call	function_printNum
	mov	r11,	rax
	jmp	end_L0
else_if_L2:
	mov	r12,	0
	cmp	r12,	1
	jne	else_L3
	push	qword	0
	mov	r12,	1
	push	r12
	call	function_printNum
	mov	r12,	rax
	jne	end_L0
else_L3:
	push	qword	0
	mov	r13,	134123
	push	r13
	call	function_printNum
	mov	r13,	rax
end_L0:
	mov	r14,	1
	mov	rax,	r14
	add	rsp,	48
	pop	rbp
	xor	rbx,	rbx
	int	0x80
function_add:
	push	rbp
	mov	rbp,	rsp
	mov	r14d,	dword [rbp + 16]
	mov	r15d,	dword [rbp + 24]
	add	r15,	r14
	mov	rax,	r15
	pop	rbp
	ret

	section .data

num_fmt: db	"%i", 10, 0
