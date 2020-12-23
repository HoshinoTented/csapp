/// absSum:
///   irmovq $-1, %r8
///   irmovq $8, %r9
///   xorq %rax, %rax
///   andq %rsi, %rsi
///   jmp test
/// loop:
///   mrmovq (%rdi), %r10			// set v to *start
///   andq %r10, %r10				// test v with 0
///   jge pos						// v >= 0 -> pos
///   xorq %r8, %r10				// v = ~v
///   subq %r8, %r10				// v += 1; (v -= -1)
/// pos:
///   addq %r10, %rax				// sum += v;
///   addq $r9, %rdi				// start ++;
///   addq $r8, %rsi				// count --;
/// test:
///   jne loop
///   ret
long absSum(long *start, long count) {
	long sum = 0;

	while (count) {
		long v = *start;
		sum += v < 0 ? -v : v;
		start ++;
		count --;
	}

	return sum;
}