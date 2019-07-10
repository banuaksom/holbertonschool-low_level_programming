#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: character to check
 * @accept: character to check
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	char *start = accept;

	for ( ; *s != '\0'; s++)
	{
		accept = start;
		for ( ; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				counter++;
				break;
			}
		}
		if (*accept == '\0')
		{
			break;
		}
	}
	return (counter);
}
