#include <stdio.h>
#include "main.h"

/**
* _memset - fill the memory with a constant byte
* @s: starting address of memory to be filled
* @b: constant byte (value to be filled)
* @n: the first byte
*
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
