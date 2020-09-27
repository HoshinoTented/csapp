void cond_goto(long a, long *p) {
	if (!p) {
		goto fail;
	}

	if (a <= *p) {
		goto fail;
	}

	*p = a;

	fail:
	return;
}

long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se_goto(long x, long y) {
	int t = x < y;
	long result;

	if (t) {
		goto suc;
	}

	ge_cnt ++;
	result = x - y;

	goto done;

	suc:
	lt_cnt ++;
	result = y - x;

	done:
	return result;
}

long test(long x, long y, long z) {
	long val = x + y + z;

	if (x < -3) {
		if (y < z) {
			val = x * y;
		} else {
			val = y * z;
		}
	} else if (x > 2) {
		val = x * z;
	}

	return val;
}