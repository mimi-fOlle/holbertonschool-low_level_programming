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
		i = -1 * (n % 10);
	else
		i = n % 10;

	_putchar((i % 10) + '0');
	return (i % 10);
}
