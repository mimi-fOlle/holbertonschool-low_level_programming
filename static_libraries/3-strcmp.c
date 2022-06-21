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
	int ls1, ls2, i;

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;
	for (i = 0; (i < ls1) || (i < ls2); i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
