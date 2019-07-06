#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: character to check
 * @src: character to check
 * @n: character to check
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *begin = dest;
	int noc = 0;

	for ( ; noc < n && *src != '\0'; noc++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	for ( ; noc < n; noc++)
	{
		*dest = '\0';
		dest++;

	}
	dest = begin;
	return (dest);
}
