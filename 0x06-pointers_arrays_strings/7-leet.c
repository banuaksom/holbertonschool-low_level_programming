#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: character to check
 *
 * Return: char
 */

char *leet(char *s)
{
	int i;
	char matching[256];
	char *b = s;

	for (i = 0; i < 256; i++)
	{
		matching[i] = i;
	}
	matching['a'] = matching['A'] = '4';
	matching['e'] = matching['E'] = '3';
	matching['o'] = matching['O'] = '0';
	matching['t'] = matching['T'] = '7';
	matching['l'] = matching['L'] = '1';
	// hello
	for ( ; *s != '\0'; s++)
	{
		*s = matching[(int)*s];
	}
	s = b;
	return (s);
}
