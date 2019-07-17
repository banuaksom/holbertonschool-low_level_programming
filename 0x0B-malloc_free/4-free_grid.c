#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - frees a 2 dimensional grid
  * @grid: character to check
  * @height: character to check
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	for ( ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
