#include <stdio.h>

int main()
{
	int arr[10];
	int i_odd = 0, i_even = 9;

	while (i_odd <= i_even)
	{
		int num;
		printf("Give a number: ");
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			arr[i_even] = num;
			i_even--;
		}
		else
		{
			arr[i_odd] = num;
			i_odd++;
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
