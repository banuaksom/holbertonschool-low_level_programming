#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: character to check
 * Return: char
 */

char *rot13(char *s)
{
	int i;
	char alpha[52] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
		'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K',
		'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q',
		'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W',
		'x', 'X', 'y', 'Y', 'z', 'Z'};
	char match[52] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R',
		's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X',
		'y', 'Y', 'z', 'Z', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D',
		'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J',
		'k', 'K', 'l', 'L', 'm', 'M'};
	char *b = s;

	for ( ; *b != '\0'; b++)
	{
		for (i = 0; i < 53; i++)
		{
			if (*b == alpha[i])
			{
				*b = match[i];
				break;
			}
		}
	}
	return (s);
}
