#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("Add result: %d \n", num);
}

int ReadNum()
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg()
{
	printf("If you type two integers, then the program prints out the total.\n");
	printf("Now, type two integers.\n");
}

int main()
{
	int result, num1, num2;
	HowToUseThisProg();

	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);

	ShowAddResult(result);

	return 0;
}
