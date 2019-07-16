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
	char *copy = NULL;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	copy = malloc(len * sizeof(char) + 1);
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
	free(copy);
}
