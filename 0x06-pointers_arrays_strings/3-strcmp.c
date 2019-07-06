#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: character to check
 * @s2: character to check
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		s2++;
	}
	if (s1 < s2 || s1 > s2)
		return (*s1 - *s2);
	else
		return (0);

}
