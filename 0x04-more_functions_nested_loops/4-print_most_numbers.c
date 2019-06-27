#include "holberton.h"
#include <stdio.h>
/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 * void - returns no arguments
 */

void print_most_numbers(void)
{
	int i;
	char s[] = "01356789\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
