#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: character to check
 * @src: character to check
 * Return: char.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int noc1 = 0;
	int noc2 = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		noc1++;
	}

	for (i = 0; dest[i] != '\0'; i++)
	{
		noc2++;
	}

	for (i = noc2; i < (noc1 + noc2); i++)
	{
		dest[i] = src[i - noc2];
	}
	return (dest);
}
