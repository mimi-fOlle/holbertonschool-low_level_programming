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
	int strl;
	int i;

	for (strl = 0; src[strl] != '\0'; strl++)
		;

	for (i = 0; i <= strl; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
