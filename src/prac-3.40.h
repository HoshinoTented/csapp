#define N 16

typedef int fix_matrix[N][N];

void fix_set_diag_opt(fix_matrix A, int val) {
	int *Aptr = &A[0][0];
	int i = 0;
	int Aend = N * N + N;

	do {
		Aptr[i] = val;
		i += N + 1;
	} while (i != Aend);
}