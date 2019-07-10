#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: character to check
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *start = s;

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*start);
}
