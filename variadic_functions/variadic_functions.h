#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>

/**
* struct type - definition
* @c: char
* @i: integer
* @f: float
* @s: char *
*/
struct type_t
{
	char *t_short;
	void (*typeprint)(va_list);
};

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
