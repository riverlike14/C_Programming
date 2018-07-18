#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20];
	char str2[20];
	printf("Type a word 1: ");
	scanf("%s", str1);
	printf("Type a word 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("The two texts are completely same.");
	}
	else
	{
		puts("The two texts are different.");

		if (!strncmp(str1, str2, 3))
			puts("But the first three letters are same.");
	}

	return 0;
}
