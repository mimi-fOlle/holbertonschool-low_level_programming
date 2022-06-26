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
	int i, j;
	char *box2;

	if (str == NULL || str == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	box2 = malloc(sizeof(char) * i);
	if (box2 == NULL)
	{
		printf("Error on malloc str dump");
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		box2[j] = str[j];
	}
	return (box2);
}
