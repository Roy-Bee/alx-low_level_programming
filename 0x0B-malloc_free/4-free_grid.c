#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees a 2 dimensional grid
 * **grid - input the grid number
 * height - input a number
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
