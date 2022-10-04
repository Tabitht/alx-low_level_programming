#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid- to free a 2d array previously created
 * @grid: the array to be freed
 * @height: number of rows of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
