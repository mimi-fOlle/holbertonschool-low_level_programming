#include "main.h"

/**
*
*
*
*/

int main()
{
	FILE *file_from, *file_to;
	char NAME_OF_THE_FILE[1000];

	file_to = open(NAME_OF_THE_FILE, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == NULL)
	{
		dprintf(NAME_OF_THE_FILE[0], "Error: Can't write to 
NAME_OF_THE_FILE\n");
		exit (99);
	}

	file_from = open(NAME_OF_THE_FILE, O_RDONLY);
	if (file_from == NULL)
	{
		dprintf(NAME_OF_THE_FILE[0], "Error: Can't read from file 
NAME_OF_THE_FILE\n");
		exit (98);
	}

	close(file_to);
	close(file_from);
	if (file_to != NULL || file_from != NULL)
	{
		dprintf(NAME_OF_THE_FILE[0], "Error: Can't close fd
FD_VALUE\n");
		exit (100);
		return (0);
}
