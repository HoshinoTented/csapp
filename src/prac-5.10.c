/// long a[1000];
/// A. copy_array(a + 1, a, 999); 将数组元素向前移动一位
/// B. copy_array(a, a + 1, 999); 将所有元素设置为 a[0] = 0
void copy_array(long *src, long *dest, long n) {
	long i;

	for (i = 0; i < n; i ++) {
		dest[i] = src[i];
	}
}