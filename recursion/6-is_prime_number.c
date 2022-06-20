#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* is_prime_number - return 1 if the input integer is a prime number
* @n: given number
*
* Return: Always 0
*/

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	return (1);
}
