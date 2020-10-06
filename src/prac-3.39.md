* 3.1: `&D[i][j] = x_d + L * (C * i + j)`

`source`
```c
#define N 16
typedef int fix_matrix[N][N];

fix_matrix A;
fix_matrix B;

int *Aptr = &A[i][0];
int *Bptr = &B[0][k];
int *Bend = &B[N][k];
```

`assembly`
```asm
salq $6, %rdx
addq %rdx, %rdi
leaq (%rsi, %rcx, 4), %rcx
leaq 1024(%rcx), %rsi
```

`Aptr = &A[i][0] = x_a + sizeof(int) * N * i = x_a + 4 * 16 * i = x_a + 64 * i`

`addq %rdx, %rdi = x_a + i * 2^6 = x_a + 64 * i`

`Bptr = &B[0][k] = x_b + sizeof(int) * (N * 0 + k) = x_b + 4 * k`

`leaq (%rsi, %rcx, 4), %rcx = x_b + 4 * k`

`Bend = &B[N][k] = x_b + sizeof(int) * (N * N + k) = x_b + 1024 + 4 * k`

`leaq 1024(%rcx), %rsi = 1024 + Bptr = 1024 + x_b + 4 * k`