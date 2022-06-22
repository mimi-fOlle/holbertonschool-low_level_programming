#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
* @argc: number of arguments supplied through the command line
* @argv: an array of character pointer which contains the all parameters
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
