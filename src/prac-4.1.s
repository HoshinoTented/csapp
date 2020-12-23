.pos 0x100   # Start code at address 0x100
    irmovq $15, %rbx        # 30 F3 0F 00 00 00 00 00 00 00
    rrmovq %rbx, $rcx       # 20 31
loop:
    rmmovq %rcx, -3(%rbx)   # 40 13 DF FF FF FF FF FF FF FF
    addq %rbx, %rcx         # 60 31
    jmp loop                # 70 0C 01 00 00 00 00 00 00 00