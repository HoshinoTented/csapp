fcvt2:
        movl        (%rdi), %eax            // int i = *ip;
        vmovss      (%rsi), %xmm0           // float f = *fp;
        vcvttsd2si  (%rdx), %r8d            // double d = *dp
        movl        %r8d, (%rdi)            // *ip = (int) d;
        // val1 = d;
        vcvtsi2ss   %eax, %xmm1, %xmm1      // (float) i
        vmovss      %xmm1, (%rsi)           // *fp = (float) i;
        // val2 = i;
        cvtsi2sdq   %rcx, %xmm1, %xmm1      // (double) l
        vmovsd      %xmm1, (%rdx)           // *dp = (double) l;
        // val3 = l;
        // convert f to double
        vunpcklps   %xmm0, %xmm0, %xmm0
        vcvtps2pd   %xmm0, %xmm0
        ret         // return f
        // val4 = f;
