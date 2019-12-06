#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: character to chec
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
		return (count);
	}
	else
	{
		return (0);
	}
}
