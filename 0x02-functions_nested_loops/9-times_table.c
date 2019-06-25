#include "holberton.h"
/**
 *times_table -  prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, k, d1, d2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k >= 10)
			{
				d1 = k / 10;
				d2 = k % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d1 + 48);
				_putchar(d2 + 48);
			}
			else
			{
				if (j == 0)
				{
					_putchar(k + 48);
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
				}
			}
		}
		_putchar('\n');
	}
}
