#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main()
{
	char str[100];
	printf("Type a word: ");
	fgets(str, sizeof(str), stdin);
	printf("Length: %d, text: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("Length: %d, text: %s \n", strlen(str), str);

	return 0;
}
