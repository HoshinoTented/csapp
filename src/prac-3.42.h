struct ELE {
	long v;
	struct ELE *p;
};

long fun(struct ELE *ptr);

//////////////// ANSWER ////////////////////

// fun:
//   movl $0, %eax			// init %rax
//   jmp .L2				// jump to middle
// .L3:
//   addq (%rdi), %rax		// add (%rdi)->v to %rax
//   movq 8(%rdi), %rdi		// set %rdi to (%rdi)->p
// .L2:
//   testq %rdi, %rdi		// test ptr != 0
//   jne .L3
//   rep; ret
//

long fun(struct ELE *ptr) {
	long sum = 0;
	struct ELE *p = ptr;

	while (p != 0) {
		sum += p->v;
		p = p->p;
	}

	return sum;
}

// B. LinkedList