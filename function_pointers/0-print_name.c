#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - print a name
* @name: value
* @f: member
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
