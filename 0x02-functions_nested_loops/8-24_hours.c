#include "holberton.h"
/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int pair1, pair2, d1, d2, d3, d4;

	for (pair1 = 0; pair1 <= 23; pair1++)
	{
		for (pair2 = 0; pair2 <= 59; pair2++)
		{
			d1 = pair1 / 10;
			d2 = pair1 % 10;
			d3 = pair2 / 10;
			d4 = pair2 % 10;
			_putchar(d1 + '0');
			_putchar(d2 + '0');
			_putchar(':');
			_putchar(d3 + '0');
			_putchar(d4 + '0');
			_putchar('\n');
		}
	}
}
