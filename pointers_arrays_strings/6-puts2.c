#include "main.h"

/**
* puts2 - print every other character of a string
* @str: value
*
*/

void puts2(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		if ((t % 2) == 0)
			_putchar(str[t]);
	}
	_putchar(10);
}
