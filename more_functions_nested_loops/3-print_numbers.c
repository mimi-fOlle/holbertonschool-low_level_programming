#include <stdio.h>
#include "main.h"

/**
* print_numbers - print numbers
* n - number
* _putchar - print value
*
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar(10);
}
