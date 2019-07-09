#include "holberton.h"
/**
  * _memset - fills memory with a constant byte  
  * @s: character to check
  * @b: character to check
  * @n: character to check
  * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	char *end = s + n - 1;
	for ( ; start <= end; start ++)
	{
		*start = b;
	}
	return (s);
}
