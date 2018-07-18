#include <stdio.h>
#include <string.h>

int main()
{
	printf("Give a string: ");
	char s[200]; scanf("%s", s);

	int num = strlen(s);
	int i = 0, j = num - 1;

	while (i < num / 2)
	{
		if (s[i] != s[j])
		{
			printf("Not palindrome");
			return 0;
		}
		i++;
		j--;
	}

	printf("Palindrome");

	return 0;
}
