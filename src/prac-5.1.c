/// 若 xp == yp, 则置 0
void swap(long *xp, long *yp) {
	*xp = *xp + *yp;
	*yp = *xp - *yp;
	*xp = *xp - *yp;
}