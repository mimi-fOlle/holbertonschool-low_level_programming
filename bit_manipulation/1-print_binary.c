#include "main.h"
#include <string.h>

/**
* print_binary - prints the binary representation of a number
* @n: number
*/

void print_binary(unsigned long int n)
{
	unsigned long int i;

	while (n != 0)
	{

	}
	x2 = x1 ^ 1; /*equal to (x1 + 1) % 2, for values 0, 1*/

	unsigned long int i, r_shift;

	for (i = 31; i; i--)
	{
		r_shift = n >> i;
		
		if (r_shift & 1)
			_putchar('1');
		else _putchar('0');
	}
}
