 Label | PC       | Command   | %rdi | %rsi | %rax | %rsp           | * %rsp   | Description
:-----:|:--------:|:---------:|:----:|:----:|:----:|:--------------:|:--------:|:---------------:
 M1    | 0x400560 | callq     | 10   | -    | -    | 0x7fffffffe820 | -        | Call first(10)
 F1    | 0x400548 | lea       | 10   | -    | -    | 0x7fffffffe818 | 0x400565 | x + 1
 F2    | 0x40054c | sub       | 10   | 11   | -    | 0x7fffffffe818 | 0x400565 | x - 1
 F3    | 0x400550 | callq     | 9    | 11   | -    | 0xffffffffe818 | 0x400565 | Call last(x - 1, x + 1) 
 L1    | 0x400540 | mov       | 9    | 11   | -    | 0xffffffffe810 | 0x400555 | u
 L2    | 0x400543 | imul      | 9    | 11   | 9    | 0xffffffffe810 | 0x400555 | u * v
 L3    | 0x400547 | retq      | 9    | 11   | 99   | 0xffffffffe810 | 0x400555 | Return
 F4    | 0x400555 | repz retq | 9    | 11   | 99   | 0xffffffffe818 | 0x400565 | Return
 M2    | 0x400565 | mov       | 9    | 11   | 99   | 0xffffffffe820 | -        | Resume