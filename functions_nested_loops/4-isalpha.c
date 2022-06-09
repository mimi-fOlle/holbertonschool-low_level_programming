#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - check for an alphabetic character
* @c: character
*
* Return: Always 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
