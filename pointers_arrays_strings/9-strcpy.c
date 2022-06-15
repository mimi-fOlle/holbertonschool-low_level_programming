#include <stdio.h>
#include "main.h"

/**
* _strcpy - copy the string pointed to by src, to the buffer pointed to by dest
* @dest: pointer to the destination array where the content is to be copied
* @src: the string to be copied
*
* Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 500;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < j)

			dest[i] = src[i];
	}
	for (; i < j; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
