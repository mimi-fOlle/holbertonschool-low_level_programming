#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* islower - check for a lowercase character
* @c: character
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