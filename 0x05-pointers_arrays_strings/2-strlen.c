#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int counter = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
