#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isupper - check whether the given character is upper case or not
* @c: character
*
* Return: Always 0 (Success)
*/

int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}

	else
	{	
		return (0);
	}
}
