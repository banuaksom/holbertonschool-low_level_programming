#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: character to check
  * Return: char
  */
char *_strdup(char *str)
{
	char *copy = malloc(sizeof(str));
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sizeof(str) + 1; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
