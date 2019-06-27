#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
