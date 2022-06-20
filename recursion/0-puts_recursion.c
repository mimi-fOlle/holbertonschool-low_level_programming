#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - print a string, followed by a new line
* @s: string
*
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
