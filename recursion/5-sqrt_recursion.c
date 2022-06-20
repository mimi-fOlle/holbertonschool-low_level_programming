#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* _sqrt_tmp - return the natural square root of a number
* @it: start from 1
* @n: natural square number
*
* Return: square number
*/

int _sqrt_tmp(long int it, long int n)
{
	int long tmp;

	tmp = (it + n / it) / 2;
	if (((it * it) <= n) && ((it + 1) * (it + 1)) > n)
	{
		return (it);
	}
	else
	{
		return (_sqrt_tmp(tmp, n));
	}
}

/**
* _sqrt_recursion - return the natural square root of a number
* @n: natural square root
*
* Return: square number
*/

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (_sqrt_tmp(1, n));
	return (0);
}
