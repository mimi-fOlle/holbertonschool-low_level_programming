#include "main.h"
#include <stdio.h>

/**
* print_array - print n elements of an array of integers
*
*
*/

void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		printf("%i", a[n]);

		if (n < 4)
			printf(", ");
	}
	printf("\n");
}
