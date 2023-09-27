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
	sub	rsp,	16
	mov	rbx,	0
	mov	dword [rbp - 4],	ebx
	mov	rbx,	0
	mov	dword [rbp - 8],	ebx
	mov	rbx,	0
	mov	dword [rbp - 12],	ebx
for_start_0:
	mov	ebx,	dword [rbp - 12]
	mov	r10,	10
	mov	r11,	0
	cmp	rbx,	r10
	jnl	end_2
	mov	r11,	1
end_2:
	cmp	r11d,	1
	jne	for_end_1
	push	qword	0
	mov	ebx,	dword [rbp - 12]
	push	rbx
	call	function_printNum
	add	rsp,	16
	mov	rbx,	rax
	mov	r10d,	dword [rbp - 12]
	mov	r12,	1
	add	r12,	r10
	mov	dword [rbp - 12],	r12d
	jmp	for_start_0
for_end_1:
	mov	r10,	1
	mov	rax,	r10
	add	rsp,	16
	pop	rbp
	xor	rbx,	rbx
	int	0x80
function_add:
	push	rbp
	mov	rbp,	rsp
	mov	r10d,	dword [rbp + 16]
	mov	r12d,	dword [rbp + 24]
	add	r12,	r10
	mov	rax,	r12
	pop	rbp
	ret

	section .data

num_fmt: db	"%i", 10, 0
