#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of integers
  * using the Binary search algorithm
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: The index where value is located
  */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = 0;
	unsigned long int i = 0;

	while (high >= low)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (high + low) / 2;

		if (array[mid] > value)
			high = mid - 1;

		else if (array[mid] < value)
			low = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
