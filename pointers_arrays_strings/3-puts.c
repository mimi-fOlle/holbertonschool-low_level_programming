#include <stdio.h>
#include "main.h"

/**
* _puts - print a string, followed by a new line, to stdout
* @str: character string to be written
*
*/

void _puts(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		_putchar(str[t]);
	}

	_putchar(10);
}
