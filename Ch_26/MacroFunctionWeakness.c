#include <stdio.h>

#define DIFF_ABS(X, Y) ((X)>(Y) ? (X)-(Y) : (Y)-(X))

int main()
{
	printf("Difference: %d \n", DIFF_ABS(5, 7));
	printf("Difference: %g \n", DIFF_ABS(1.8, -1.4));

	return 0;
}
