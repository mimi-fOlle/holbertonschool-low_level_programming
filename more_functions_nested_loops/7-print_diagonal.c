#include <stdio.h>
#include "main.h"

/**
* print_diagonal - draw a diagonal line
* @n: number
*
*/

void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar(10);
	}
	else if (n > 0)
	{
		for (n = 1; n < 100; n++)
		{
		_putchar(32);
		}
	}
	_putchar(92);
	_putchar(10);
}
