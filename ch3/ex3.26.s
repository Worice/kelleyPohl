	.file	"ex3.26.c"
	.section	.rodata
	.align 8
.LC0:
	.string	"\nGiven that tehy can be both lower and uppercare, I suppose\nthat the program will run without problem.\n"
.LC1:
	.string	"a = %d\t\tb = %d\t\tc = %d\n"
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
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$2748, -12(%rbp)
	movl	$2748, -8(%rbp)
	movl	$2748, -4(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	-4(%rbp), %ecx
	movl	-8(%rbp), %edx
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 6.3.0-12ubuntu2) 6.3.0 20170406"
	.section	.note.GNU-stack,"",@progbits
