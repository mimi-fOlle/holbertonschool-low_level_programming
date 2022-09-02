#include <stdio.h>

/**
  * main - Prints all possible different combinartions of 2 digits
  *
  * Return: 0 if success
  */

int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			if (j != i)
			{
				putchar (i);
				putchar (j);
				if (i == 56 && j == 57)
					continue;

				putchar (44);
				putchar (32);
			}
		}
	}
	putchar (10);
	return (0);
}
