#include <stdio.h>
#include <malloc.h>
#include <string.h>

// A.:
// 00 00 00 00 00 40 00 76: Return Address
// 01 23 45 67 89 AB CD EF: Register %rbx
// unknown				  : Stack Allocated
// unknown				  : Stack Allocated <- %rsp
// unknown				  : Unallocated
//
// B.:
// 00 00 00 00 00 00 00 34: Return Address
// 33 32 31 30 39 38 37 36: Register %rbx
// 35 34 33 32 31 30 39 38: Stack Allocated
// 37 36 35 34 33 32 31 30: Stack Allocated <- %rsp
//
// C.:
// 00 00 00 00 00 00 00 34
//
// D.:
// %rbx
//
// E.:
// > malloc(strlen(buf))
// 应当为 '\0' 字符保留一位，正确代码应该是 `malloc(strlen(buf) + 1)`
//
// 应当检查 malloc 返回值是否为 NULL
char *get_line() {
	char buf[4];
	char *result;
	gets(buf);
	result = malloc(strlen(buf));
	strcpy(result, buf);
	return result;
}