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

		for (z = 0; z < n; z++)
		{
			printf("%d", a[z]);

			if (z == n - 1)
				continue;

			printf(", ");
		}
	printf("\n");
}
