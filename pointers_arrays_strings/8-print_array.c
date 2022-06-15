#include "main.h"
#include <stdio.h>

/**
* print_array - print n elements of an array of integers
* @a: value
* @n: value
*
*/

void print_array(int *a, int n)
{

	int z;

	for (z = 0; z <= 300; z++)
	{
		for (n = 0; n < z; n++)
		{
			printf("%i", a[n]);

		if (n < (z - 1))
			printf(", ");
		}
	}
	printf("\n");
}
