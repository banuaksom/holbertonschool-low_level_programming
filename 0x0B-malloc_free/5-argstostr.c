#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * argstostr - concatenates all the arguments
  * @ac: character to check
  * @av: character to check
  * Return: char
  */
char *argstostr(int ac, char **av)
{
	int i, j, num_of_bytes = 0, shift = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			num_of_bytes++;
		}
		num_of_bytes++;
	}
	str = malloc(num_of_bytes * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, shift++)
	{
		for (j = 0; av[i][j] != '\0'; j++, shift++)
		{
			*(str + shift) = *(*(av + i) + j);
		}
		*(str + shift) = '\n';
	}
	*(str + shift) = '\0';
	return (str);
}
