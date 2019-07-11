#include "holberton.h"
/**
  * f2 - checks if the integer is prime
  * @n: character to check
  * @i: character to check
  * Return: int
  */
int f2(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (f2(n, i + 1));
}

/**
 * is_prime_number - checks if the integer is prime
 * @n: character to check
 * Return: int
 */
int is_prime_number(int n)
{
	return (f2(n, 2));
}
