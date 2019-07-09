#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: character to check
 * @src: character to check
 * @n: character to check
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		*start++ = *src++;
	}
	return (dest);
}
