#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
* main - Entry point
* @argc: number of arguments supplied through the command line
* @argv: an array of character pointer which contains the all parameters
*
* Return: return 1 if Error
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", sum);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
