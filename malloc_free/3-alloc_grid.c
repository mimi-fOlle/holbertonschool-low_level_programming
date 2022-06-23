#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - return a pointer to a 2 dimensional array of integers
* @width: width of 2 dimension
* @height: height of 2 dimension
*
* Return: NULL if width or height is 0; NULL if fails
*/

int **alloc_grid(int width, int height)
{
	int h, i;
	int **r;

	if (width <= 0 || height <= 0)
		return (NULL);
	r = malloc(sizeof(int *) * height);
	if (r == NULL)
	{
		free(r);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		r[i] = malloc(sizeof(int) * width);
		if (r[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(r[i]);
			free(r);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (h = 0; h < width; h++)
			r[i][h] = 0;
	return (r);
}
