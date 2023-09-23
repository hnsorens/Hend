	section	.text
	global	_start

_start:
	mov	rbx,	1
	push	rbx
	mov	rbx,	2
	push	rbx
	call	function_add
	mov	rbx,	rax
	mov	r10,	1
	mov	rax,	r10
	xor	rbx,	rbx
	int	0x80
function_add:
	push	rbp
	mov	rbp,	rsp
	sub	rsp,	4
	mov	r10,	2
	mov	r11,	1
	add	r11,	r10
	mov	dword [rbp - 4],	r11d
	mov	r10d,	dword [rbp + 16]
	mov	r12d,	dword [rbp + 24]
	add	r12,	r10
	mov	rax,	r12
	add	rsp,	4
	pop	rbp
	ret

	section .data

message: db	"Hello, World", 10
