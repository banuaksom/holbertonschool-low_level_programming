#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: character to check
  * @s2: character to check
  * Return: char
  */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		*s1 = "";
		*s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	new_str = malloc((len1 + len2) * sizeof(char) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = len1, j = 0; i < len1 + len2 && j < len2; i++, j++)
	{
		new_str[i] = s2[j];
	}
	new_str[i] = '\0';
	return (new_str);
	free(new_str);
}
