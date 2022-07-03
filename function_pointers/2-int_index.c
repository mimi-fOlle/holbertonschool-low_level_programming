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
	(*cmp)(array[size]);
}
