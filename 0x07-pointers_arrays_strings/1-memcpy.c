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
	char *stop = src + n;
	for ( ; start < stop; start++, src++)
	{
		*start = *src;
	}
	return (dest);
}
