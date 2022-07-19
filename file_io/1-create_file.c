#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - create a file
* @filename: name of the file to create
* @text_content: is a NULL terminated string to write to the file
*
* Return: 1 if success; -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 6000);
	if (fd == -1)
		return (-1);

	while (text_content[len])
	{
		len++;
		if (text_content == NULL)
		{
			fd = open(filename, O_CREAT, 6000);
		}
		else
			write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
