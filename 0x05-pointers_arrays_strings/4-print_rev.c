#include "holberton.h"
/**
 * print_rev -  prints a string in reverse
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	s--;
	while (length)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
