#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocate memory
* @b: size
*
* Return: return status value of 98 if fails
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
