#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: character to check
 */
void print_number(int n)
{
	unsigned int m;
	int rem, i;
	int number_started = 0;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		m = n;
	if (m > 0)
	{
		rem = m % 10;
		if (m / 10 > 0)
		{
			for (i = 1000000000; i >= 10; i = i / 10)
			{
				if (m / i > 0)
				number_started = 1;
				if (number_started)
				{
					_putchar((m / i % 10) + '0');
					m = m % i;
				}
			}
			_putchar(rem + '0');
		}
	}
}
