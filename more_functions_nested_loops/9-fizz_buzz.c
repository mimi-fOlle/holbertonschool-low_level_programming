#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* n - number
*
* Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", n);
		}
	}
	printf("\n");
	return (0);
}
