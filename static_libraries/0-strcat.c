#include <stdio.h>
#include "main.h"

/**
* _strcat - appends the src string to the dest string
* @dest: pointer to the destination array
* @src: the string to be appended
*
* Return: point to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int lsrc, ldest, g;

	for (ldest = 0; dest[ldest] != '\0'; ldest++)
		;
	for (lsrc = 0; src[lsrc] != '\0'; lsrc++)
		;
	for (g = 0; g <= lsrc; g++)
		dest[ldest + g] = src[g];

	return (dest);
}
