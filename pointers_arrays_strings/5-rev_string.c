#include "main.h"

/**
* rev_string - reverse a string
* @s: pointer parameter that points to the adress of a variable of type char
*/

void rev_string(char *s)
{
	int t;
	int r;
	int temp;

	for (t = 0; s[t] != '\0'; t++)
		;
	for (r = 0; r < t / 2; r++)
	{
		temp = s[r];
		s[r] = s[t - 1 - r];
		s[t - 1 - r] = temp;
	}
}
