#include "holberton.h"
/**
 * _strcpy - copies the string
 * @dest: pointer to int
 * @src: character to check
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
