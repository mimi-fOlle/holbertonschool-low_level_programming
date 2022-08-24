#include "search_algos.h"
#include <math.h>

unsigned long int min(unsigned long int a, unsigned long int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
  * jump_search - Searches for a value in a sorted array of integers
  * using the Jump search algorithm
  * @array: A pointer to the first element of the array to search in
  * @size: The number of element in array
  * @value: The value to search for
  *
  * Return: The first index where value is located
  */

int jump_search(int *array, size_t size, int value)
{
	unsigned long int prev = 0; /*Initialize the block where elelment is present*/
	unsigned long int step = sqrt(size); /*initialize block size= √(size)*/

	int found = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[min(step, size) - 1] < value && found == 0)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		if (array[prev] <= value && array[step] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
			found = 1;
		}
		else
		{
			prev = step;  /*shift the block*/
			step += sqrt(size);
		}
		if (prev >= size) /*if step exceeds the array size*/
			return (-1);
	}
	if (found == 0)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	}
	while (array[prev] <= value) /*Linear search for value in block*/
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		/*if element is found*/
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
