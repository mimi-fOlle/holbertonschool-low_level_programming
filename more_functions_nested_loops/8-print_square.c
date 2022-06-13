#include <stdio.h>
#include "main.h"

/**
* print_square - print a square
* @size: the size of the square
* x - loop
* y - loop
*
*/

void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar(10);

	}
	if (size <= 0)
	{
		_putchar(10);
	}

}
