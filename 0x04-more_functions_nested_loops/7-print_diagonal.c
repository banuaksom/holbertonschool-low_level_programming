#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - draws a straight line in the terminal
 * @n: character to check
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
