// align: 8
// size: 56
struct {
	char *a;	// 0
	short b;	// 8
	double c;	// 16
	char d;		// 24
	float e;	// 28
	char f;		// 32
	long g;     // 40
	int h;		// 48
} rec;

// note: 字段的 offset 与整个 struct 的 align 没有任何关系，字段的 offset 必须是其类型的 align 的倍数：如 字段 e，其 offset 位 28，是 4 的倍数

// align: 8
// size: 40
struct {
	char *a;	// 0
	double c;	// 8
	long g;		// 16
	float e;	// 24
	int h;		// 28
	short b;	// 30
	char d;		// 31
	char f;		// 32
} lite;