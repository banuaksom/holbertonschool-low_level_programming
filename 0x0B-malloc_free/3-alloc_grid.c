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
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}
	return (grid);
}
