#include "main.h"
#include <stdio.h>

/**
* _strspn - get the length of a prefix substring
* @s: initial segment to be scanned
* @accept: string containing the bytes to match
*
* Return: the number of bytes in the initial segment of s which consist
* only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int it, res = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		it = 0;
		for (j = 0; s[j] != '\0' && s[j] != ' '; j++)
		{
			if (s[j] == accept[i])
				it++;
		}
		res = res + it;
	}
	return (res);
}
