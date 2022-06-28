#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocate memory for an array with malloc
* @nmemb: number of elements to be allocted
* @size: size of elements
*
* Return: return a pointer to the allocated memory, or NULL if fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
