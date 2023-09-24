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
	mov	r10,	1
	mov	rax,	r10
	add	rsp,	48
	pop	rbp
	xor	rbx,	rbx
	int	0x80

	section .data

num_fmt: db	"%i", 10, 0
