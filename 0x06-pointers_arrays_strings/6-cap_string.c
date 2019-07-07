#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: character to check
 *
 * Return: char
 */

char *cap_string(char *s)
{
	char *uc = s;

	for ( ; *s != '\0'; s++)
	{
		if (s == uc)
			*s -= 32;
		else if (*s == 32 || *s == '\t' || *s == '\n' || *s == 44 ||
				*s == 59 || *s == 46 || *s == 33 || *s == 63
				|| *s == 34 || *s == 40 || *s == 41 || *s == 123 || *s == 125)
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
				*(s + 1) -= 32;
		}
	}
	s = uc;
	return (s);
}
