#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of char and initializes it w/ a specific char
* @size: size of array
* @c: characters
*
* Return: a pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array = "NULL";
	unsigned int i;

	if (size != 0)
	{
		array = malloc(sizeof(char) * size);
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (array);
}
