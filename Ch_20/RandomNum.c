#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("Range of random numbers: From 0 to %d \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("print random number: %d \n", rand());

	return 0;
}
