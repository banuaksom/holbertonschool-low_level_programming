#include "holberton.h"
/**
  * f - finds the natural square root of a number
  * @n: character to check
  * @i: character to check
  * Return: int
  */
int f(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n == i * i)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (f(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: character to check
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (f(n, 0));
}
