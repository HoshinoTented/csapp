void origin() {
	long sum = 0;
	long i;

	for (i = 0; i < 10; i ++) {
		if (i & 1) continue;
		sum += i;
	}
}

void bad() {
	long sum = 0;
	long i;

	i = 0;
	while (i < 10) {
		if (i & 1) continue;
		sum += i;
		i ++;
	}
}

void good() {
	long sum = 0;
	long i;

	i = 0;
	while (i < 10) {
		if (i & 1) goto acc;
		sum += i;

		acc:
		i ++;
	}
}