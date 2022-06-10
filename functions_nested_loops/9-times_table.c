#include <stdio.h>
#include "main.h"

/**
* times_table - 2 dimension
* @n: number
* @j: number
*
*/

void times_table(void)
{
	int n;
	int j;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(n * j);
		}
	}
	_putchar(10);
}
