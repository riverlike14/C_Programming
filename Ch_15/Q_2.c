#include <stdio.h>

int main()
{
	int num;
    printf("Give a number: ");
	scanf("%d", &num);

	int arr[32];
	int len = 0;

    while (num != 0)
	{
		arr[len] = num % 2;
		len++;
		num /= 2;
	}

	for (int i = len - 1; i > -1; i--)
		printf("%d", arr[i]);

	return 0;
}
