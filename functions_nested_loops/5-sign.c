#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_sign - Sign
* @n: number
*
* Return: return 1 and print +, return 0 and print 0, return -1 and print -
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}
}
