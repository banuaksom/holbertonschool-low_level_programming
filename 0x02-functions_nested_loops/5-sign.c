#include "holberton.h"
/**
 * print_sign - checks  the sign of character
 * @n: the character to check
 *
 * Return: 1 if n is greater than 0, 0 if n is zero and -1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
