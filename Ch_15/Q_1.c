#include <stdio.h>

void print_odd(int* ptr)
{
	printf("Print odd number: ");
	
	for (int i = 0; i < 10; i++)
	{
		int num = ptr[i];
		if (num % 2 == 1)
			printf("%d ", num);
	}
	printf("\n");
}

void print_even(int* ptr)
{
	printf("Print even number: ");

	for (int i = 0; i < 10; i++)
	{
		int num = ptr[i];
		if (num % 2 == 0)
			printf("%d ", num);
	}
	printf("\n");
}

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Give a number:");
		scanf("%d", &arr[i]);
	}

	print_odd(arr);
	print_even(arr);

	return 0;
}
