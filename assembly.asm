	section	.text
	global	_start

_start:
	push	rbp
	mov	rbp,	rsp
	sub	rsp,	4
	mov	rbx,	1
	push	rbx
	mov	rbx,	0
	push	rbx
	call	function_add
	mov	rbx,	rax
	mov	r10,	1
	mov	r11,	2
	add	r11,	r10
	mov	dword [rbp - 4],	r11d
	mov	r10,	1
	mov	rax,	r10
	add	rsp,	4
	pop	rbp
	xor	rbx,	rbx
	int	0x80
function_add:
	push	rbp
	mov	rbp,	rsp
	sub	rsp,	4
	mov	r10,	2
	mov	r12,	1
	add	r12,	r10
	mov	dword [rbp - 4],	r12d
	mov	r10d,	dword [rbp + 16]
	mov	r13d,	dword [rbp + 24]
	add	r13,	r10
	mov	rax,	r13
	add	rsp,	4
	pop	rbp
	ret

	section .data

message: db	"Hello, World", 10
