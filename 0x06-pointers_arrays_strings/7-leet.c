#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: character to check
 *
 * Return: char
 */

char *leet(char *s)
{
	char *b = s;
	char encode[15] = {'a', 'A', '4', 'e', 'E', '3',
		'o', 'O', '0', 't', 'T', '7', 'l', 'L', '1'
	};
	char *e = encode;

	for ( ; *s != '\0'; s++)
	{
		for ( ; *e != '\0'; e = e + 3)
		{
			if (*s == *e || *s == *(e + 1))
				*s = *(e + 2);
		}
		e = encode;
	}
	s = b;
	return (s);
}
