#include <stdio.h>
#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n: number
*
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
	n = -n;
	}
		i = n % 10;

	_putchar('0' + i);
	return (i);
}
