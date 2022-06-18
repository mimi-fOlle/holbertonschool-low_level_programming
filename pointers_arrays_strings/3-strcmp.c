#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares two strings (s1, S2)
* @s1: string 1
* @s2: string 2
*
* Return: Always 0
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (i > j)
		return (s1[0] - s2[0]);
	else if (i < j)
		return (s1[0] - s2[0]);
	return (0);
}
