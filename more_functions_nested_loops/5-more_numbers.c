#include <stdio.h>
#include "main.h"

/**
* more_numbers - print 10 times numbers from 0 to 14
* n - number
*
*/

void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(1 + '0');
			}
			_putchar(i % 10 + '0');

		}
		_putchar(10);
	}
}
