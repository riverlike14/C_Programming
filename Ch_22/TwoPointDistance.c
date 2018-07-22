#include <stdio.h>
#include <math.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double) ((pos1.xpos - pos2.xpos)*(pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos)*(pos1.ypos - pos2.ypos)));

	printf("The distance between the two points is %g. \n", distance);

	return 0;
}
