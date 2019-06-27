#include "holberton.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * void - returns no arguments
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
