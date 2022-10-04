#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid- to return a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: returns an integer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);
	free(ptr);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		free(ptr[i]);
		if (ptr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
