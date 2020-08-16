#include "BreakChocolate.h"
unsigned int breakChocolate(unsigned int n, unsigned int m) {
	unsigned int i = 1;
	unsigned int k = 0;
	unsigned int S = n * m;
	while (S != 1) {
		if (S % 2 == 0) {
			S = S / 2;
			k = k + i;
			i = i * 2;
		}
		else {
			S = S - 1;
			k = k + i;
		}
	}
	return k;
}