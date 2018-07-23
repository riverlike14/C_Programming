#include <stdio.h>

typedef struct
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student * sptr)
{
	printf("Name: %s \n", sptr->name);
	printf("Number: %s \n", sptr->stdnum);
	printf("School: %s \n", sptr->school);
	printf("Major: %s \n", sptr->major);
	printf("Grade: %d \n", sptr->year);
}

int main()
{
	Student arr[7];
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("Name: "); scanf("%s", arr[i].name);
		printf("Number: "); scanf("%s", arr[i].stdnum);
		printf("School: "); scanf("%s", arr[i].school);
		printf("Major: "); scanf("%s", arr[i].major);
		printf("Grade: "); scanf("%s", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);

	return 0;
}
