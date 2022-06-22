#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - Entry point
* @argc: number of arguments supplied through the command line
* @argv: an array of character pointer which contains the all parameters
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
		return (0);
}
