#include "main.h"

/**
* _strncat - concatenate two strings not more than n bytes
* @src: the string to be appended
* @dest: pointer to the destination array
* @n: bytes
*
* Return: point to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int ldest, lsrc;

	for (ldest = 0; dest[ldest] != '\0'; ldest++)
		;

	for (lsrc = 0; src[lsrc] && n > lsrc; lsrc++)
	{
		dest[ldest] = src[lsrc];
		ldest++;
	}
	return (dest);
}
