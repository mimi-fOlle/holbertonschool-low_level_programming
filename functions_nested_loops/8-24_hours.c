#include "main.h"
#include <stdio.h>

/**
* jack_bauer - kind of CIA hero
* @h: hour
* @m: minute
*
*/

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		_putchar(h);
		_putchar(58);
	}
	
	for (m = 0; m <= 59; m++)
	{
		_putchar(m);
	}
	_putchar(10);
}
