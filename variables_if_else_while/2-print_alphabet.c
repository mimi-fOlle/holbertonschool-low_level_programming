#include <stdio.h>

/**
* main - Entry point
* putchar - Write a character of unsigned char type, to stdout
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar (10);
	return (0);
}
