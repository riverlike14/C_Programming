#include <stdio.h>

int main()
{
	int num = 1;

	if (num == 1)
	{
		int num = 7;
		num += 10;
		printf("Local variable num in if loop: %d \n", num);
	}

	printf("Local variable num in main function: %d \n", num);

	return 0;
}
