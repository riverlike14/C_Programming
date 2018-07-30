#include <stdio.h>

// #define ADD 1
#define MIN 0

int main()
{
	int num1, num2;
	printf("Type two integers: ");
	scanf("%d %d", &num1, &num2);
	
#ifdef ADD
	printf("%d + %d = %d \n", num1, num2, num1+num2);
#endif

#ifdef MIN
	printf("%d - %d = %d \n", num1, num2, num1-num2);
#endif

	return 0;
}
