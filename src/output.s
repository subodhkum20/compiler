	.text
	.globl main
	.type main, @function
.L0:
main :
	pushq %rbp
	movq  %rsp, %rbp
	subq 13, %rsp
	movl $5, -4(%rbp)
	movl $10, -8(%rbp)
.L5:
	mov %eax, -4(%rbp)
	cmp -8(%rbp), %eax
	jne .L8
	mov $0, %eax
	jmp .L9
.L8:
	movl $1, %eax
.L9:
	mov -9(%rbp), %eax
	cmp $0, -9(%rbp)
	jne .L1
.L2:
	jmp .L3
.L1:
	mov %eax, -4(%rbp)
	inc %eax
	mov -4(%rbp), %eax
	mov -4(%rbp), %eax
	jmp .L5
.L3:
	mov $0, %eax
	leave
	ret
.L7:
