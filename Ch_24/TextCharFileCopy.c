#include <stdio.h>

int main()
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL) {
		puts("Fail to open file!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feof(src) != 0)
		puts("Complete copy!");
	else
		puts("Fail to copy!");

	fclose(src);
	fclose(des);

	return 0;
}
