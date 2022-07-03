#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - print a name
* @name: member
* @f: member
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		(*f)(name);
	}
}
