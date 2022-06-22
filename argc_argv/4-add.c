#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: number of arguments supplied through the command line
* @argv: an array of character pointer which contains the all parameters
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
