#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_sign - Sign
* @n: number
*
* Return: Always 0
*/

int print_sign(int n)
{
	if (n >= 0)
	{
		_putchar(43);
		return (1);
	}

	if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	if (n <= 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
