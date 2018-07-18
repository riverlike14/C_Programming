#include <stdio.h>

int main()
{
	char str[] = "Good morning!";
	printf("Size of str: %d \n", sizeof(str));
	printf("Print Null char by char: %c \n", str[13]);
	printf("Print Null char by int: %d \n", str[13]);

	str[12] = '?';
	printf("Print string: %s \n", str);

	return 0;
}
