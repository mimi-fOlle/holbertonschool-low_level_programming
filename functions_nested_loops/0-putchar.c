#include <unistd.h>
#include <_putchar.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	char *ch = "_putchar";

	putchar (ch);
	return (0);
}
