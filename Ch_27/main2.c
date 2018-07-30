#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main()
{
	printf("Area of a triangle(base 4, height 2): %g \n",
			TriangleArea(4, 2));
	printf("Area of a circle(rad 3): %g \n",
			CircleArea(3));

	printf("Round of a rectangle(base 2.5, height 5.2): %g \n",
			RectangleRound(2.5, 5.2));
	printf("Round of a square(side 3): %g \n",
			SquareRound(3));

	return 0;
}
