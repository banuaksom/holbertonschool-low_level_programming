#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: the length of a string
 */

int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != '0' && s[i] != '1')
			return (0);
		i++;
	}
	return (i);
}
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string
  * Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 0, num = 0, len = 0;

	if (b != NULL)
		len = _strlen(b);
	for ( ; len != 0; pow++, len--)
	{
		if (b[len - 1] == '1')
			num += 1 << pow;
	}
	return (num);
}
