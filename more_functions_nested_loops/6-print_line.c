#include <stdio.h>
#include "main.h"

/**
* print_line - draw straight line
* @n: number
*
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);

	for (n = 1; n < 100; n++)
	{
		_putchar('_');
	}
	}
	_putchar(10);
}
