typedef union {
	struct {
		long u;
		short v;
		char w;
	} t1;

	struct {
		int a[2];
		char *p;
	} t2;
} u_type;

// movq (%rdi), %rax
// movq %rax, (%rsi)
void get_long(u_type *up, long *dest) {
	*dest = up->t1.u;
}

// movw 8(%rdi), %ax
// movw %ax, (%rsi)
void get_1(u_type *up, short *dest) {
	*dest = up->t1.v;
}

// leaq 10(%rdi), %rax
// movq %rax, (%rsi)
void get_2(u_type *up, char **dest) {
	*dest = &up->t1.w;
}

// movq %rdi, (%rsi)
void get_3(u_type *up, int **dest) {
	*dest = up->t2.a;
}

// movq (%rdi), %rax
// movl (%rdi, %rax, 4), %eax
// movl %eax, (%rsi)
void get_4(u_type *up, int *dest) {
	*dest = up->t2.a[up->t1.u];
}

// movq 8(%rdi), %rax
// movb (%rax), %al
// movb %al, (%rsi)
void get_5(u_type *up, char *dest) {
	*dest = *up->t2.p;
}

int main() {}