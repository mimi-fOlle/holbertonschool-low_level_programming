#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_numbers - print numbers followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		printf("%i", va_arg(ap, int));

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%i%s", va_arg(ap, int), separator);
		else
			printf("%i", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
