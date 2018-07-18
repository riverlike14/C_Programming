#include <stdio.h>

int main()
{
	int arr1[2][3][4];
	double arr2[5][5][5];

	printf("Heights:2, length:3, width:4 int array: %d \n", sizeof(arr1));
	printf("Heights:5, length:5, width:5 double array: %d \n", sizeof(arr2));

	return 0;
}
