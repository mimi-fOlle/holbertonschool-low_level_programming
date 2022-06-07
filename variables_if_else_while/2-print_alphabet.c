#include <stdio.h>

/**
* main - Entry point
* putchar - Write a character of unsigned char type, to stdout
* @a: Alphabet starts
* @z: Alphabet ends
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
	return (0);
}
