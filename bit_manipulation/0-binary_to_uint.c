#include "main.h"
#include <math.h>
#include <string.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
*
* Return: the converted number, or 0 if b is NULL
* or there is one or more chars in the string b that is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, base = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i + 1]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (i >= 0)
	{
		dec += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}
	return (dec);
}
