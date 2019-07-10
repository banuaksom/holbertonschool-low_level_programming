#include "holberton.h"
/**
  * _puts_recursion - prints a string
  * @s: character to check
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}