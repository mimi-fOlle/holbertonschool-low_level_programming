#include <stdio.h>
#include "main.h"

/**
* print_triangle - print a triangle
* @size: size of the triangle
* x - loop
* y - loop
*
*/

void print_triangle(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
		for (y = size; y >= 1; y--)
		{
			if ((size - x) <= (size - y))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
			_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
