#include "main.h"

/**
* rev_string - reverse a string
* @s: value
*
*/

void rev_string(char *s)
{
	int t;
	int l, r, temp;

	for (t = 0; t[s] != '\0'; t++)
	{
		l = 0;
		r = l - 1;

		while(l < r)
		{
			temp = t[l];
			t[l] = t[r];
			t[r] = temp;

			l++;
			r--;
		}
		_putchar(t[s]);
	}
	_putchar(10);
}
