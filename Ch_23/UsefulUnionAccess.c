#include <stdio.h>

typedef struct
{
	unsigned short upper;
	unsigned short lower;
} DBShort;

typedef union
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
} RDBuf;

int main()
{
	RDBuf buf;
	printf("Type integer: ");
	scanf("%d", &(buf.iBuf));

	printf("Upper 2 bytes: %u \n", buf.sBuf.upper);
	printf("Lower 2 bytes: %u \n", buf.sBuf.lower);
	printf("Upper 1 byte ASCII: %c \n", buf.bBuf[0]);
	printf("Lower 1 byte ASCII: %c \n", buf.bBuf[3]);

	return 0;
}
