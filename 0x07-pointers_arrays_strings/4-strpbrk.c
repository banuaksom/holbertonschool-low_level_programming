#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: character to check
 * @accept: character to check
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	for ( ; *s != '\0'; s++)
	{
		accept = start;
		for ( ; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
			if (*s == '\0')
			{
				return ('\0');
			}
		}

	}
	return ('\0');
}
