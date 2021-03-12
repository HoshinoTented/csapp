void combine5(vec_ptr v, data_t *dest) {
	long limit = length - 4;

	for (i = 0; i < limit; i += 5) {
		acc = ((((acc OP data[i]) OP acc OP data[i + 1]) OP acc OP data[i + 2]) ...)
	}
}