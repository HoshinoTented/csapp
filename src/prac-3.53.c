typedef void * undefined;

typedef int arg1_t;
typedef long arg2_t;	// or float
typedef float arg3_t;	// or long
typedef double arg4_t;

double funct1(arg1_t p, arg2_t q, arg3_t r, arg4_t s) {
	return p / (q + r) - s;
}