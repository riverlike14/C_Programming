#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person man1, man2;
	strcpy(man1.name, "Ahn");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	printf("Type name: "); scanf("%s", man2.name);
	printf("Type phone number: "); scanf("%s", man2.phoneNum);
	printf("Type age: "); scanf("%d", &(man2.age));

	printf("Name: %s \n", man1.name);
	printf("Number: %s \n", man1.phoneNum);
	printf("Age: %d \n", man1.age);

	printf("Name: %s \n", man2.name);
	printf("Number: %s \n", man2.phoneNum);
	printf("Age: %d \n", man2.age);

	return 0;
}
