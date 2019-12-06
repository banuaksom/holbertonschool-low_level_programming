#include "holberton.h"
#include <stdio.h>
/**
 * print_array -  prints a string to stdout
 * @a: pointer to int
 * @n: character to check
 */

void print_array(int *a, int n)
{
	int *start = a;
	int *stop  = a + n - 1;

	while (*start <= *stop)
	{
		start++;
	}
	printf("%d", *start);
	printf("\n");
}
