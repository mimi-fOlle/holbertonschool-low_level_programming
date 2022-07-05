#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
* print_all - print anything
* @format: a list of types of arguments passed to the function
*/

void charprint(va_list va)
{
	printf("%c", va_arg(va, int));
}

void intprint(va_list va)
{
	printf("%d", va_arg(va, unsigned int));
}

void floatprint(va_list va)
{
	printf("%f", va_arg(va, double));
}

void stringprint(va_list va)
{
	char *str = va_arg(va, char *);
	if (str==NULL)
	{
		printf("(nil)");
		exit(0);
	}
	printf("%s", str);
	/*
	printf("4%s", va_arg(va, char *));
*/
	}

void nilprint(va_list va)
{
	if (va_arg(va, double) != 0)
		printf("(nil)");
}

void print_all(const char * const format, ...)
{
	va_list ap;
	int runargs, runFormat;

	struct type_t fm[] = {
		{"c", charprint},
		{"i", intprint},
		{"f", floatprint},
		{"", nilprint},
		{"s", stringprint}
	};

	va_start(ap, format);

	runFormat = 0;
	runargs = 0;
	
	while (format && format[runargs])
	{
		while (fm[runFormat].t_short)
		{
			if (format[runargs] == *fm[runFormat].t_short)
			{
				fm[runFormat].typeprint(ap);

				if (runargs < (int)strlen(format) - 1)
				{
					printf(", ");
				}
			}
			runFormat++;
		}
		runargs++;
		runFormat = 0;
	}

	va_end(ap);
	printf("\n");
}
