#include <stdio.h>

int main()
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5, 6, 7};
	int arr3[5] = {1, 2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("size of arr1: %d \n", sizeof(arr1));
	printf("size of arr2: %d \n", sizeof(arr2));
	printf("size of arr3: %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for(i=0; i<ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for(i=0; i<ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for(i=0; i<ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	
	return 0;
}
