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
