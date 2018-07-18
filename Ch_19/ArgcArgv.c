#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	printf("The number of char: %d \n", argc);

	for (i = 0; i < argc; i++)
		printf("%d-th char: %s \n", i+1, argv[i]);

	return 0;
}
