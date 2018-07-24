#include <stdio.h>

int main()
{
	FILE * fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("Fail to open file!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);

	return 0;
}
