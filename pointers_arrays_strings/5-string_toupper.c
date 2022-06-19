#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* string_toupper - change all lowercase letters of a string to uppercase
* @s: char string
*
* Return: Always 0
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++) /**For loop to read each alphabet*/
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (0);
}
