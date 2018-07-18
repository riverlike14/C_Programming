#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];

	printf("Type an integer: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("Type a floating number: ");
	scanf("%s", str);
	printf("%g \n", atof(str));

	return 0;
}
