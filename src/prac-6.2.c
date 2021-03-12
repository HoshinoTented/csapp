#include <stdio.h>

int main() {
	long long sector = 512;
	long long track = sector * 400;
	long long surface = track * 10000;
	long long platter = surface * 2;
	long long disk = platter * 2;

	printf("%lld\n", disk);

	return 0;
}