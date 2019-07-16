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
	char *new_array = malloc(sizeof(str));
	char *p = new_array;

	while (*str != '\0')
	{
		*new_array++ = *str++;
	}
	*new_array = '\0';
	new_array = p;

	if (str == NULL)
	{
		return (NULL);
	}

	return (new_array);
}
