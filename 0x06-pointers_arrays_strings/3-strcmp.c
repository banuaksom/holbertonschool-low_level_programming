#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: character to check
 * @s2: character to check
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
			if (*s1 == '\0')
				return (0);
	}
	return (*s1 - *s2);

}
