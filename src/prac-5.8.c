/// r = ((r * x) * y) * z; 3 * 5 / 3
/// r = (r * (x * y)) * z; 2 * 5 / 3
/// r = r * ((x * y) * z); 1 * 5 / 3
/// r = r * (x * (y * z)); 1 * 5 / 3
/// r = (r * x) * (y * z); 2 * 5 / 3
double aprod(double a[], long n) {
	long i;
	double x, y, z;
	double r = 1;
	for (i = 0; i < n - 2; i += 3) {
		x = a[i];
		y = a[i + 1];
		z = a[i + 2];

		r = EXPR;
	}

	for (; i < n; i ++) {
		r *= a[i];

		return r;
	}
}