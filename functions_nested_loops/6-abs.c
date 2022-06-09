#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _abs - the absolute value of the integer argument j
* @n: number
*
* Return: Always 0
*/

int _abs(int n)
{

	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
}
