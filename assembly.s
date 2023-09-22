.data
    print_number_format: .asciz "%d\n"
.text
.global main
printNum:
    PUSH %rbx
    LEA print_number_format(%rip), %rdi
    XOR %eax, %eax
    CALL printf
    POP %rbx
    RET
main:
    PUSHQ %rbp
    MOVQ %rsp, %rbp
    SUBQ $32, %rsp
    MOVQ $1, %rbx
    MOVQ $2, %r10
    ADDQ %rbx, %r10
    MOVQ %r10, -24(%rbp)
    MOVQ -24(%rbp), %rbx
    MOVQ -24(%rbp), %rsi
    call printNum
    MOVQ $1, %r11
    MOVQ %r11, %rax
    JMP .main_end
.main_end:
    MOVQ %rbp, %rsp
   POPQ %rbp
   RET
