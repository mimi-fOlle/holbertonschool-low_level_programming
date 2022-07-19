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

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		write(fd, text_content, len);
	}
	else
		text_content = "";

	close(fd);
	if ((close(fd)) == -1)
		return (-1);
	return (1);
}
