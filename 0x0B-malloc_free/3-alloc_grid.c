#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - returns a pointer to a 2 dimensional array
  * @width: character to check
  * @height: character to check
  * Return: int
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}
	return (grid);
	free(grid);
}
