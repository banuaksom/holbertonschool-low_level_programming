#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: character to check
  * @max: character to check
  * Return: int
  */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		array[i] = min + i;
	return (array);
}
