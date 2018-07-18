#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 > age2)
		return age2;
	else if (age1 < age2)
		return age1;
	else
		return 0;
}

int main()
{
	int age1 = 20, age2 = 30;
	int first;

	printf("Order of Entry 1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d enters first between %d years old and %d years old \n\n", first, age1, age2);

	printf("Order of Entry 2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst); 
	printf("%d enters first between %d years old and %d years old \n\n", first, age1, age2);

	return 0;
}
