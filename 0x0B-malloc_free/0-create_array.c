#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - creates an array of chars
  * @size: character to check
  * @c: character to check
  * Return: char
  */
char *create_array(unsigned int size, char c)
{
	char *new_array = malloc(size * sizeof(char) + 1);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}
	new_array[i] = '\0';

	if (new_array == NULL)
	{
		return (NULL);
	}
	return (new_array);
}
