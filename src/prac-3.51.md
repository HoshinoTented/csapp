 Tx     | Ty       | Instruction
:-------|:---------|:-----------------------------------
 long   | double   | `vcvtsi2sdq %rdi, %xmm0, %xmm0`
 double | int      | `vcvttsd2si %xmm0, %eax`
 double | float    | `vunpcklps %xmm0, %xmm0, %xmm0`; `vcvtpd2ps %xmm0, %xmm0`
 long   | float    | `vcvtsi2ssq %rdi, %xmm0, %xmm0`
 float  | long     | `vcvttss2siq %xmm0, %rax`