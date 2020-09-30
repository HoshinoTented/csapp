long frac_for_goto(long n) {
	long i;
	long result = 1;
	i = 2;

	if (n <= 1) goto done;

	body:
	result *= i;
	i ++;
	if (i <= n) goto body;

	done:
	return result;
}