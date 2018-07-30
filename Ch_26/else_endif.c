#include <stdio.h>

#define HIT_NUM 5

int main()
{
#if HIT_NUM == 5
	puts("The macro constant HIT_NUM is 5 now."); 
#else
	puts("The macro constant HIT_NUM is not 5.");
#endif

	return 0;
}
