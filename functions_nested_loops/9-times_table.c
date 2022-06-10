#include <stdio.h>
#include "main.h"

/**
* times_table - 2 dimension
*/

void times_table(void)
{
	int n;
	int j;

	for (n = 0; n <= 9; n++)
	{

		for (j = 0; j <= 9; j++)
		{

			if ((n * j / 10) == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar((n * j / 10) + '0');
			}
			_putchar((n * j % 10) + '0');

			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	_putchar(10);
	}
}
