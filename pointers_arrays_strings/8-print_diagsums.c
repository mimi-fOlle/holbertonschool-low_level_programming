#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_diagsums - print the sum of the 2 diagonals of a square matrix of int
* @a: array
* @size: size of array
*
*/

void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			j += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			k += *(a + i);
	}
	printf("%d, %d\n", j, k);
}
