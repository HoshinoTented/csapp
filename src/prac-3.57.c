double funct3(int *ap, double b, long c, float *dp) {
	if (b < *ap) {
		// .L8
		return c + *dp * 2;
	} else {
		return *dp * c;
	}
}