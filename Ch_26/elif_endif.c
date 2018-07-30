#include <stdio.h>

#define HIT_NUM 7

int main()
{
#if HIT_NUM == 5
	puts("The macro constant HIT_NUM is 5 now.");
#elif HIT_NUM == 6
	puts("The macro constant HIT_NUM is 6 now.");
#elif HIT_NUM == 7
	puts("The macro constant HIT_NUM is 7 now.");
#else
	puts("The macro constant HIT_NUM is definitely not either one of 5, 6, and 7.");
#endif

	return 0;
}
