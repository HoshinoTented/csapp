void psum1(float a[], float p[], long n) {
	long i;
	float last = a[0];

	p[0] = a[0];

	for (i = 1; i < n; i ++) {
		last = last + a[i];
		p[i] = last;
	}
}