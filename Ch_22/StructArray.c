#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Type position of point: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);

	return 0;
}
