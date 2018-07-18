#include <stdio.h>

int NumberCompare(int num1, int num2);

int main()
{
	printf("The greater integer between 3 and 4 is %d.\n", NumberCompare(3, 4));
	printf("The greater integer between 7 and 2 is %d.\n", NumberCompare(7, 2));

	return 0;
}

int NumberCompare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
