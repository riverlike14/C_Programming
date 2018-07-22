#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
	struct point * ptr;
};

int main()
{
	struct point pos1 = {1, 1};
	struct point pos2 = {2, 2};
	struct point pos3 = {3, 3};

	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("Relationship between points... \n");
	printf("[%d, %d] and [%d, %d] are connected \n",
			pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d] and [%d, %d] are connected \n",
			pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d] and [%d, %d] are connected \n",
			pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

	return 0;
}
