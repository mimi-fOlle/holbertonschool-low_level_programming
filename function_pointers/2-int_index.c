#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - search for an integer
* @array: member
* @size: the number of elements in the array
* @cmp: a pointer to the function to be used to compare values
*
* Return: return the index of the first elem for which cmp doesn't return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
