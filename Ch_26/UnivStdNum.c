#include <stdio.h>

#define STNUM(Y, S, P) Y ## S ## P 

int main()
{
	printf("Std ID: %d \n", STNUM(10, 65, 175));
	printf("Std ID: %d \n", STNUM(10, 65, 075));

	return 0;
}
