#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - print strings followed by a new line
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);


	if (separator == NULL)
		separator = "";
	
	for (i = 0; i <= n && n != 0; i++)
	{
		if (i < n - 1)
			printf("%s%s", va_arg(ap, char*), separator);
		if (i == n)
			printf("%s", va_arg(ap, char*));


/**
		if (separator != NULL)
			printf("%s", va_arg(ap, char*));
		if (va_arg(ap, char*) == NULL)
printf("(nil)");
*/
	}
	va_end(ap);
	printf("\n");
}
