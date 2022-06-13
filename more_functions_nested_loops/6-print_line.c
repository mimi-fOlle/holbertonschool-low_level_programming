#include <stdio.h>
#include "main.h"

/**
* print_line - draw straight line
* @n: input number
* @i: number for loop
*
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
