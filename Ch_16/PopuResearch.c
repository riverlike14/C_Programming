#include <stdio.h>

int main()
{
	int villa[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d floor %d room population: ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = villa[i][0] + villa[i][1];
		printf("%d floor population: %d \n", i+1, popu);
	}

	return 0;
}
