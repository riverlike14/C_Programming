#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

typedef struct
{
	Point cen;
	double rad;
} Circle;

void ShowCircleInfo(Circle * cptr)
{
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

int main()
{
	Circle c1 = {{1, 2}, 3.5};
	Circle c2 = {2, 4, 3.9};
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);

	return 0;
}
