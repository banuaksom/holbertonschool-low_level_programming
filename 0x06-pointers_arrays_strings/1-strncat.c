#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: character to check
 * @src: character to check
 * @n: character to check
 * Return: char.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *begin = dest;
	char *stop = src + n;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != *stop)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest + 1) = '\0';
	dest = begin;
	return (dest);
}
