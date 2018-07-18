#include <stdio.h>

int main()
{
	int arr[3] = {0, 1, 2};

	printf("Name of array: %p \n", arr);
	printf("First element: %p \n", &arr[0]);
	printf("Second element: %p \n", &arr[1]);
	printf("Third element: %p \n", &arr[2]);

	return 0;
}
