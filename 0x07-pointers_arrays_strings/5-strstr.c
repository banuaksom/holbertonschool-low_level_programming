#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: character to check
 * @needle: character to check
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for ( ; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			needle = start;
			for ( ; *needle != '\0'; needle++, haystack++)
			{
				if (*needle == *haystack)
				{
					return (needle);
				}
				if (needle == '\0')
				{
					break;
				}
			}
		}
	}
	return ('\0');
}
