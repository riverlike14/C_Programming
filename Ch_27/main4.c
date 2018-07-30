#include <stdio.h>
#include "stdiv.h"

extern Div IntDiv(int num1, int num2);

int main()
{
	Div val = IntDiv(5, 2);
	printf("Quotient: %d \n", val.quotient);
	printf("Remainder: %d \n", val.remainder);

	return 0;
}
