#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile - reads a text file and prints it to the POSIX stdout
* @filename: the filename
* @letters: the number of letters it should read and print
*
* Return: return the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_bytes, size;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	size = read(fd, buffer, letters);
	read_bytes = write(STDOUT_FILENO, buffer, size);

	close(fd);
	free(buffer);
	return (read_bytes);
}
