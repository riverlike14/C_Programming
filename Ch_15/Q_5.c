#include <stdio.h>

void BubbleSort(int ary[], int len);

int main()
{
	int arr[7];
	for (int i = 0; i < 7; i++)
	{
		printf("Give a number: ");
		scanf("%d", &arr[i]);
	}

	BubbleSort(arr, sizeof(arr)/sizeof(int));

	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

void BubbleSort(int ary[], int len)
{
	int i, j, temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] < ary[j+1])
			{
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}
