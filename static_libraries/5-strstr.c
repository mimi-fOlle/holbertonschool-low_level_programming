#include <stdio.h>
#include "main.h"

/**
* _strstr - locate a substring
* @haystack: the main C string to be scanned
* @needle: the substring to be searched with-in haystack string
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return (NULL);
}
