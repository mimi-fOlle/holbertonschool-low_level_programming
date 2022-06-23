#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: 1er string
* @s2: 2e string to be concate after 1er string
*
* Return: NULL if fails
*/

char *str_concat(char *s1, char *s2)
{
	int x, y = 0, z = 0;
	char *i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] || s2[x]; x++)
		z++;
	i = malloc(sizeof(char) * z);
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (x = 0; s1[x]; x++)
		i[y++] = s1[x];
	for (x = 0; s2[x]; x++)
		i[y++] = s2[x];
	return (i);
}
