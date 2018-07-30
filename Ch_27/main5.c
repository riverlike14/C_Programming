#include <stdio.h>
#include "stdiv.h"
#include "intdiv3.h"

int main()
{
	Div val = IntDiv(5, 2);
	printf("Quotient: %d \n", val.quotient);
	printf("Remainder: %d \n", val.remainder);

	return 0;
}
