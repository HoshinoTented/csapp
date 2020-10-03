// A = 5 => .L7
// B = 0 => .L3
// C = 2 => .L5
// D = 7 => .L5
// E = 4 => .L6
// default = 1, 3, 6 => .L2

void switcher(long a, long b, long c, long *dest) {
	long val;

	switch (a) {
		case 5:
			c = b ^ 15;
		case 0:
			val = 112 + c;
			break;
		case 2:
		case 7:
			val = (c + b) << 2;
			break;
		case 4:
			val = a;
			break;
		default:
			val = b;
	}

	*dest = val;
}