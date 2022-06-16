#include <stdio.h>
#include "main.h"

/**
* strncat - concatenate two strings not more than n bytes
* @src: the string to be appended
* @dest: pointer to the destination array
* @n: 
*
* Return: point to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int ldest, lsrc;

	for (ldest = 0; dest[ldest] != '\0'; ldest++)
		;
	for (lsrc = 0; src[lsrc] != '\0'; lsrc++)
		;
	for (n = 0; n <= lsrc; n++)
	{
		dest[lsrc] = src[n];
	}
	return (dest);
}
