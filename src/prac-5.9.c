void merge_faster(long src1[], long src2[], long dest[], long n) {
	long i1 = 0;
	long i2 = 0;
	long id = 0;

	while (i1 < n && i2 < n) {
		long src1_v = src1[i1 + 1];
		long src2_v = src2[i2 + 1];
		long take = src1_v < src2_v;

		dest[id ++] = take ? src1_v : src2_v;

		i1 += take;
		i2 += (1 - take);
	}

	// ...
}