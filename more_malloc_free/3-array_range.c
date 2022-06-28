#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - create an array of integers
* @min: value
* @max: value
*
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int size_a, i, *ptr;

	if (min > max)
		return (NULL);
	size_a = max - min;
	ptr = malloc(sizeof(int) * (size_a + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size_a; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
