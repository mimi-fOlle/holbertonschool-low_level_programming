#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: the NULL terminated str to add at the end of file
*
* Return: 1 if success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	else
		fd = open(filename, O_CREAT);

	close(fd);
	return (1);
}
