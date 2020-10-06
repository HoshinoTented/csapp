// align: 4
// size: 16
struct P1 {
	int i;		// 0
	char c;		// 4
	int j;  	// 8
	char d;		// 12
};

// align: 8
// size: 16
struct P2 {
	int i;		// 0
	char c;		// 4
	char d;		// 5
	long j;		// 8
};

// align: 2
// size: 10
struct P3 {
	short w[3];	// 0
	char c[3];	// 6
};

// align: 8
// size: 40
struct P4 {
	short w[5];	// 0
	char *c[3];	// 16
};

// align: 8
// size: 40
struct P5 {
	struct P3 a[2];	// 0
	struct P2 t;	// 24
};

int main() {
	return 0;
}