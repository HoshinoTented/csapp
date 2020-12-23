#include <stdio.h>

long expect(long n) {
	return (n * 8 + 22) & -16;
}

long test(long n) {
	return (n * 8 + 16) & -16;
}

int main() {
	for (long i = 1; i > 0; ++ i) {
		long e = expect(i);
		long g = test(i);

		if (e != g) {
			printf("ERROR! expected %d, but got %d where n = %d.\n", e, g, i);
			return 1;
		} else {
			printf("Passed n = %d\n", i);
		}
	}

	return 0;
}