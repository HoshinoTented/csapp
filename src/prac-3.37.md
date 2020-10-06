 Expression      | Type    | Value                 | Assembly
:----------------|:--------|:----------------------|:--------------
 `S + 1        ` | short * | `x_s + 2            ` | `leaq 2(%rdx) %rax`
 `S[3]         ` | short   | `M[x_s + 6]         ` | `movw 6(%rdx) %ax`
 `&S[i]        ` | short * | `x_s + 2 * i        ` | `leaq (%rdx, %rcx, 2) %rax`
 `S\[4 * i + 1]` | short   | `M[x_s + 8 * i + 2] ` | `movw 2(%rdx, %rcx, 8) %ax`
 `S + i - 5    ` | short * | `x_s + 2 * i - 10   ` | `leaq -10(%rdx, %rcx, 2), %rax`
 