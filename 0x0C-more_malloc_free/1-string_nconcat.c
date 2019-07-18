#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: character to check
  * @s2: character to check
  * @n: character to check
  * Return: void
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	if (n > len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for ( ; i < len1 + n; i++)
	{
		p[i] = s2[i - len1];
	}
	p[i] = '\0';
	return (p);
}
