/// rsum:
///   xorq %rax, %rax
///   andq %rsi, %rsi
///   jle .L0
///   pushq %rbx
///   mrmovq (%rdi), %rbx
///   irmovq $-1, %r8
///   addq %r8, %rsi
///   irmovq $8, %r8
///   addq %r8, %rdi
///   call rsum
///   addq %rbx, %rax
///   popq %rbx
/// .L0:
///   ret
long rsum(long *start, long count) {
	if (count <= 0) {
		return 0;
	}

	return *start + rsum(start + 1, count - 1);
}