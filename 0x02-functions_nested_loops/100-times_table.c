#include "holberton.h"

/**
 * print_times_table - Print the n times table
 * @n: The times table to print
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j > 0)
			{
				if (k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (k < 100 && k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + 48);
				}
				else if (k >= 100 && k < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + 48);
					_putchar((k / 10) % 10 + 48);
				}
			}
			_putchar(k % 10 + 48);
		}
		_putchar('\n');
	}
}
