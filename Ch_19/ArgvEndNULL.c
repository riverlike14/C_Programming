#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 0;
	printf("The number of words: %d \n", argc);

	while (argv[i] != NULL)
	{
		printf("%d-th word: %s \n", i+1, argv[i]);
		i++;
	}

	return 0;
}
