#include <stdio.h>

int main()
{
	char str[50];
	int i = 0;

	printf("Give a string: ");
	scanf("%s", str);
	printf("Given string: %s \n", str);

	printf("Print by char: ");
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}

	printf("\n");

	return 0;
}
