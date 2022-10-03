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
	int **ptr = ptr;
	int i, j;

	ptr = (int **) malloc(sizeof(int *) * width * height);
	*ptr = (int*) malloc(sizeof(int) * width* height);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				*(ptr + j) = 0;
		}
	}
	else
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	return (ptr);
	free(ptr);
}
