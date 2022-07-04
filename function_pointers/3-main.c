#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - entry point
* @argc: argument
* @argv: argument
*
* Return: Always O
*/

int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != 43 && *argv[2] != 45 && *argv[2] != 42
&& *argv[2] != 47 && *argv[2] != 37)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == 47 || *argv[2] == 37) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
