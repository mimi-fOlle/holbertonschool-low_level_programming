#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - check if the passed character is a digit or not
* @c: character
*
* Return: Always 0
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
