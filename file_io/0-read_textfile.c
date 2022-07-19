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
	{
		free(buffer);
		return (0);
	}

	size = read(fd, buffer, letters);
	if (size == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	read_bytes = write(1, buffer, size);

	free(buffer);
	close(fd);

	if (read_bytes != size)
		return (0);

	return (size);
}
