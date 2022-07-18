#include "main.h"
#include <string.h>

/**
* print_binary - prints the binary representation of a number
* @n: number
*/

void print_binary(unsigned long int n)
{
	unsigned long int tmp, rem, i = 0;
	int count;

	if (n == 0)
		_putchar('0');
	
	tmp = n;
	while (tmp != 0)
	{
		i++;
		tmp >>= 1;
	}

	for (count = i - 1; count >= 0; count--)
	{
		rem = n >> count;
		if (rem & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
