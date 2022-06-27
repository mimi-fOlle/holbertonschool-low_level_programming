#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* calloc - allocate memory for an array
* @nmemb: element
* @size: size
*
* Return: NULL if fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(unsigned int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (nmemb = 0; ptr[nmemb]; nmemb++)
		;
	return (ptr);
}
