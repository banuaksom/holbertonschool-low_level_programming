#include "holberton.h"
/**
 * reverse_array - reverses the content of an array
 * @a: character to check
 * @n: character to check
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *end = a + n - 1;

	for ( ; *a < *end; a++, end--)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
	}
}
