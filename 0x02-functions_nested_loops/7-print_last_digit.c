#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *@a: number to check
 *
 * Return: int
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = (-1) * a;
	}
	_putchar(a + '0');
	return (a);
}
