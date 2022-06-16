#include "main.h"

/**
* print_rev - print a string in reverse
* @s: pointer parameter that points to the adress of a variable of type char
*
*/

void print_rev(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
	{
	}
		for (str = str; str--;)
		{
			_putchar(s[str]);
		}
	_putchar(10);
}
