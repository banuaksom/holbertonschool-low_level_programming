#include "holberton.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 * @n: character to check
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
