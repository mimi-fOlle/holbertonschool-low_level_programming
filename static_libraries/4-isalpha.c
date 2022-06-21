#include <stdio.h>
#include "main.h"

/**
* print_alphabet -Entry point
*
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
