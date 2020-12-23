long min(long, long);
long max(long, long);
void incr(long *, long);
long square(long);

void foo(long x, long y) {
	long i;

	// min: 1; max: 91; incr: 90; square: 90
	for (i = min(x, y); i < max(x, y); incr(&i, 1)) t += square(i);

	// max: 1; min: 91; incr: 90; square: 90
	for (i = max(x, y) - 1; i >= min(x, y); incr(&i, -1)) t += square(i);

	// min: 1; max: 1; incr: 90; square: 90
	long low = min(x, y);
	long high = max(x, y);

	for (i = low; i < high; incr(&i, -1)) t += square(i);
}