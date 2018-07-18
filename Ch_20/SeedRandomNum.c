#include <stdio.h>
#include <stdlib.h>

int main()
{
	int seed, i;
	printf("Type seed: ");
	scanf("%d", &seed);
	srand(seed);

	for (i = 0; i < 5; i++)
		printf("print integer: %d \n", rand());

	return 0;
}
