#include <stdio.h>

void ClearLineFromReadBuffer()
{
	while (getchar() != '\n');
}

int main()
{
	char perID[7];
	char name[10];

	fputs("First 6 ID number: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();

	fputs("Name: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("ID number: %s \n", perID);
	printf("Name: %s \n", name);

	return 0;
}
