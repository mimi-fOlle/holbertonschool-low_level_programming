#include <stdio.h>
#include "main.h"

/**
* _strchr - locate a character in a string
* @s: point to the string to be searched
* @c: character to be searched in string
*
* Return: a pointer to the first occurrence of the cha c in the str s; or NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] != '\0' && s[i] == c)
	{
		return (s);
		i++;
	}
	else
	return (0);
}
