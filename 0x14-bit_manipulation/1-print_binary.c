#include "holberton.h"
/**
  * print_binary - prints the binary representation of a number
  * @n: number passed
  */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int num;
	int num_starts = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			num_starts = 1;
		}
		else
		{
			if (num_starts)
			{
				_putchar('0');
			}
		}
	}
}
