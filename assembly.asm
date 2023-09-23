	section	.text
	global	_start

_start:
	sub	rbp,	80
	mov	rbx,	20
	mov	r10,	20
	mov	r11,	3
	add	r11,	r10
	mov	rax,	r11
	mul	rbx
	mov	dword [rsp],	r11d
	mov	r10,	20
	mov	dword [rsp + 4],	r10d
	mov	r11d,	dword [rsp]
	mov	r12d,	dword [rsp + 4]
	mov	rax,	r12
	mul	r11
	mov	r12,	78
	sub	r12,	r12
	mov	word [rsp + 8],	r12w
	mov	r12,	1
	mov	rax,	1
	xor	rbx,	rbx
	int	0x80

	section .data

message: db	"Hello, World", 10
