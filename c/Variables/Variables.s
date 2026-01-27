	.file	"Variables.c"
	.text
	.section	.rodata
	.align 8
.LC1:
	.string	"I am %d years old, it's %d, my gpa is %.5f, my name is %s \n"
.LC2:
	.string	"Not ready to print"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$16, -28(%rbp)
	movl	$2026, -24(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -20(%rbp)
	movl	$1869832522, -14(%rbp)
	movw	$110, -10(%rbp)
	movb	$0, -29(%rbp)
	cmpb	$0, -29(%rbp)
	je	.L2
	pxor	%xmm1, %xmm1
	cvtss2sd	-20(%rbp), %xmm1
	movq	%xmm1, %rsi
	leaq	-14(%rbp), %rcx
	movl	-24(%rbp), %edx
	movl	-28(%rbp), %eax
	leaq	.LC1(%rip), %rdi
	movq	%rsi, %xmm0
	movl	%eax, %esi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L3
.L2:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L3:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1066570739
	.ident	"GCC: (GNU) 15.2.1 20260103"
	.section	.note.GNU-stack,"",@progbits
