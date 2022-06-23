#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - free a 2 dimensional grid previously created
* grid: grid have been created
* height: height of dimension
*
*/

void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
	{
		free(grid[s]);
	}
	free(grid);
}
