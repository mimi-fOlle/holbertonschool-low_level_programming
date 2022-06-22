#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: number of arguments supplied through the command line
* @argv: an array of character pointer which contains the all parameters
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
