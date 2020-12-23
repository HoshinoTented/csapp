#include <stdio.h>

float foo() {
	return 3.1415F;
}

int main() {
	float f = foo();
	int i = foo();

	printf("%f\n", f);
	printf("%d\n", i);

	return 0;
}