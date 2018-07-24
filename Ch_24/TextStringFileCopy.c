#include <stdio.h>

int main()
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL) {
		puts("Fail to open file!");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("Complete copy!");
	else
		puts("Fail to copy!");

	fclose(src);
	fclose(des);

	return 0;
}
