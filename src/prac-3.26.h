#include "prelude.h"

// A: jump to middle
long fun_a(unsigned long x) {
	long val = 0;

	while (x != 0) {
		val = x ^ val;
		x = x >> 1;
	}

	return val & 1;
}
