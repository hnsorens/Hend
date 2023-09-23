	section	.text
	global	_start

_start:
	mov	rbx,	1
	push	rbx
	mov	rbx,	2
	push	rbx
	call	function_add
	mov	rbx,	1
	mov	rax,	rbx
	xor	rbx,	rbx
	int	0x80
function_add:
	push	rbp
	mov	rbp,	rsp
	sub	rbp,	4
	mov	bx,	word [rbp + 2]
	mov	word [rsp + 2],	bx
	mov	r10w,	word [rbp + 4]
	mov	word [rsp + 4],	r10w
	mov	r11w,	word [rsp + 2]
	mov	r12w,	word [rsp + 4]
	add	r12,	r11
	mov	rax,	r12
	pop	rbp
	ret

	section .data

message: db	"Hello, World", 10
