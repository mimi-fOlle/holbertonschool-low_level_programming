#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* file_error - while file is error
* @file_from: file from
* @file_to: file to
* @argv: argument vector
*/

void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
*
* Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, error_file;
	int count, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	count = 1024;

	while (count == 1024)
	{
		count = read(file_from, buf, 1024);
		if (count == -1)
			file_error(-1, 0, argv);
		nwr = write(file_to, buf, count);
		if (nwr == -1)
			file_error(0, -1, argv);
	}

	error_file = close(file_from);
	error_file = close(file_to);
	if (error_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
