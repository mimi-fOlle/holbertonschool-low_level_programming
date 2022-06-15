#include "main.h"

/**
* puts_half - print half of a string
* @str: value
*
*/

void puts_half(char *str)
{
	int t;
	int i;

	for (t = 0; str[t] != '\0'; t++)
	{
	}
		for (i = 0; str[i] != '\0'; i++)
		{
			if (i > (t - 1) / 2)
			{
				_putchar(str[i]);
			}
		}

	_putchar(10);
}
