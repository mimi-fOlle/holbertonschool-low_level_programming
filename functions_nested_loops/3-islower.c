#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - check the passed character is a lowercase
* @c: number
*
* Return: Always 0
*/

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
