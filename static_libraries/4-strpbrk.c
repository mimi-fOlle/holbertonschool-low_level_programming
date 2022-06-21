#include <stdio.h>
#include "main.h"

/**
* _strpbrk - search a string for any of a set of bytes
* @s: string to be scanned
* @accept: string containing the characters to match
*
* Return: a pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != ' '; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
