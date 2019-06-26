#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: number to check
 * Return: int
 */
void print_to_98(int n)
{
	for ( ; n < 98; n++)
	{
		printf("%d, ", n);

	}
	for ( ; n > 98; n--)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}
