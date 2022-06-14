#include "main.h"

/**
* _strlen - return the length of string *s
* @s: value
*
* Return: Nothing
*/

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++);

	return (str);
}
