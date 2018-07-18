#include <stdio.h>

void ShowArrayElem(int* param, int len)
{
	int i;
	for(i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void AddArrayElem(int param[], int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

int main()
{
	int arr[3] = {1, 2, 3};
	AddArrayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	return 0;
}
