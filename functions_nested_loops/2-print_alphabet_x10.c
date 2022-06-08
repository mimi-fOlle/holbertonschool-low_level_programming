#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - nested loop
* printf - new line
*
*/

void print_alphabet_x10(void)
{
	char ch;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
	}
}
