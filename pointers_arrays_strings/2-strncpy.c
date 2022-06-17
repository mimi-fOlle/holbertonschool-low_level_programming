#include "main.h"
#include <stdio.h>

/**
* _strncpy - copy a string
* @dest: pointer to the destination array where the contetn is to be copied
* @src: the string to be copied
* @n : number of input
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
