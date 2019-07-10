#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: character to check
 * @needle: character to check
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *haystack_saver;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for ( ; *haystack != '\0'; haystack++)
	{
		for (start = needle; *start != '\0'; start++)
		{
			haystack_saver = haystack;
			if (*start == *haystack_saver)
			{
				haystack_saver++;
				start++;
			}
			if (*start != *haystack_saver)
			{
				break;
			}
			if (*start != '\0')
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
