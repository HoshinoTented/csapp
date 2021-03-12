/// A.:
/// 加法：n
/// 乘法：2n
/// B.:
///
double poly(double a[], double x, long degree) {
	long i;
	double result = a[0];
	double xpwr = x;
	for (i = 1; i <= degree; i ++) {
		result = result + a[i] * xpwr;
		xpwr = x * xpwr;
	}

	return result;
}

/// A.:
/// add: 1
/// mul:
double polyh(double a[], double x, long degree) {
	long i;
	double result = a[degree];

	for (i = degree - 1; i >= 0; i --) {
		result = a[i] + x * result;
	}

	return result;
}