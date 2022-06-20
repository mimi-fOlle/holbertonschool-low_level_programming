#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* _sqrt_recursion - return the natural square root of a number
* @n: natural square root
*
* Return: Always 0
*/



int _sqrt_tmp(int it, int n)
{
	int tmp;
	
	tmp = (it + n / it) / 2;
	if (((it * it) <= n) && ((it + 1) * (it + 1 )) > n)
	{
		return (it);
	}
	else
	{
		return (_sqrt_tmp(tmp, n));
	}
}

int _sqrt_recursion(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (_sqrt_tmp(1, n));
	else
		return (-1);
}
