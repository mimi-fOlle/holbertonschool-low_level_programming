#include "main.h"

/**
* _atoi - write a function that convert a string to an integer
* @s: a string
*
* Return: 0 or number in the string
*/

int _atoi(char *s)
{
	int c = 1;
	unsigned int num = 0;

	do 
	{
		if (*s == '-')
			c *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	}
	while (*s++);
	return (num * c);
}
