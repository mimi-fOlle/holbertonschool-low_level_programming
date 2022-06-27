#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenate two strings
* @s1: string 1
* @s2: string 2
* @n: size
*
* Return: NULL if fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int ls1, ls2;
	char *ptr;

	for (ls1 = 0; s1[ls1]; ls1++)
		;
	for (ls2 = 0; s2[ls2]; ls2++)
		;
	if (n >= ls2)
		s2[ls2] += s1[ls1];
	ptr = malloc(sizeof(char) * n);
}
