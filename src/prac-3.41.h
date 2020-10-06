#include "prelude.h"

struct prob {
	int *p;
	struct {
		int x;
		int y;
	} s;
	struct prob *next;
};

// A.:
// p: 0
// s.x: p + sizeof(p) = 0 + 8 = 8
// s.y: s.x + sizeof(s.x) = 8 + 4 = 12
// next: s + sizeof(s) = 8 + 8 = 16

// B.: sizeof(p) + sizeof(s) + sizeof(next) = 8 + 8 + 8 = 24

void sp_init(struct prob *sp) {
	sp->s.x = sp->s.y;
	sp->p = &(sp->s.x);
	sp->next = sp;
}