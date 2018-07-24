#include <stdio.h>

int main()
{
	FILE * src = fopen("src.bin", "rb");
	FILE * des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("Fail to open file!");

		return -1;
	}

	while (1)
	{
		readCnt = fread((void *) buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void *) buf, 1, readCnt, des);
				puts("Complete copy");
				break;
			}
			else
				puts("Fail to copy");

			break;
		}
		fwrite((void *) buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);

	return 0;
}
