#include "main.h"

/**
* print_rev - print a string in reverse
* @s: value
*
*/

void print_rev(char *s)
{
	int str;


	for (str = 0; str[s] != '\0'; str++)
	{
		_putchar(str[s]);
	}

	
	_putchar(10);
}
