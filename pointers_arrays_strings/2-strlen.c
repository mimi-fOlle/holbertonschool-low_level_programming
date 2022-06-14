#include "main.h"

/**
* _strlen - return the length of string *s
* @s: value
*
* Return: Nothing
*/

int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
		str++;
	return (str);
}
