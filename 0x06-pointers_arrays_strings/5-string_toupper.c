#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: character to check
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	char *lc = s;

	for ( ; *s != '\0'; s++)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
	}
	s = lc;
	return (s);
}

