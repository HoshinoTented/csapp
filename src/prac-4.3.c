/// sum:
///   xorq %rax, %rax
///   andq %rsi, %rsi
///   jmp test
///   loop:
///     mrmovq (%rdi), %r10
///     andq %r10, %rax
///     iaddq $8, %rdi			// c0 f7 08 00 00 00 00 00 00 00
///     iaddq $-1, %rsi			// c0 f6 11 11 11 11 11 11 11 11
///   test:
///     jne loop
///     ret
long sum(long *start, long count) {
	long sum = 0;

	while (count) {
		sum += *start;
		start ++;
		count --;
	}

	return sum;
}