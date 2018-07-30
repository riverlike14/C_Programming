#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"


int main()
{
	Div val = IntDiv(5, 2);
	printf("Quotient: %d \n", val.quotient);
	printf("Remainder: %d \n", val.remainder);

	return 0;
}
