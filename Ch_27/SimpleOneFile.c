#include <stdio.h>

int num = 0;

void Increment(void)
{
	num++;
}

int GetNum(void)
{
	return num;
}

int main()
{
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	
	return 0;
}
