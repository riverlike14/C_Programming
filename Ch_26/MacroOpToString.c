#include <stdio.h>

#define STRING_JOB(A, B) #A " is a " #B

int main()
{
	printf("%s \n", STRING_JOB(Lee, waiter));
	printf("%s \n", STRING_JOB(Han, hunter));

	return 0;
}
