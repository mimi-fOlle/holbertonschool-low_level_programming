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
	unsigned int ls1, ls2, i, j, target;
	char *s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (ls1 = 0; s1[ls1]; ls1++)
		;
	for (ls2 = 0; s2[ls2]; ls2++)
		;
	if (n >= ls2)
		target = ls2;
	else
		target = n;
	s3 = malloc(sizeof(char) * target);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		s3[i] = s1[i];
	}
		for (j = 0; j <= target; j++)
		{
			s3[i++] = s2[j];
		}
	return (s3);
}
