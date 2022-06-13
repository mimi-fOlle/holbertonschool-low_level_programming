#include <stdio.h>
#include "main.h"

/**
* print_line - draw straight line
* n - number
*
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar('_');
	}
	_putchar(10);
}
