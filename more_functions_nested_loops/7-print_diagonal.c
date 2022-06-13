#include <stdio.h>
#include "main.h"

/**
* print_diagonal - draw a diagonal line
* @n: number
* x - vertical line for loop
* y - horizon line for loop
*/

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (x == y)
			{
				_putchar(92);
				_putchar(10);
			}
			else if (x > y)
			{
				_putchar(' ');
			}
		}
	}
	if ((x <= 0) && (y <= 0))
	{
		_putchar(10);
	}
}
