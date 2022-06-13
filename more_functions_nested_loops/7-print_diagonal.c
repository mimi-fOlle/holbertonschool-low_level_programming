#include <stdio.h>
#include "main.h"

/**
* print_diagonal - draw a diagonal line
* @n: number
*
*/

void print_diagonal(int n)
{
	int x;

	for (n = 1; n < 100; n++)
	{
		for (x = 1; x < 100; x++)
		{
			if (n == x)
			{
				_putchar(92);
			}
		}
	}
	_putchar(10);
}
