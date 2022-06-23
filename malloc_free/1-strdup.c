#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - return a pointer to a new string which is duplicate of the string
* @str: a duplicate of the string
*
* Return: NULL if str=NULL
*/

char *_strdup(char *str)
{
	char *i;
	int s, t = 0;

	if (str == NULL)
		return (NULL);
	for (s = 0; str[s]; s++)
		t++;
	i = malloc(sizeof(char) * (t + 1));
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (s = 0; str[s]; s++)
		i[s] = str[s];
	i[t] = '\0';
	return (i);
}
