#include <stdio.h>

int main()
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%dth iteration / Local variable num is %d.\n", cnt + 1, num);
	}

	if (cnt == 3)
	{
		int num = 7;
		num++;
		printf("Local variable num in if loop is %d.\n", num);
	}

	return 0;
}
