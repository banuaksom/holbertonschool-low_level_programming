#include "holberton.h"
#include <stdio.h>
/**
 * print_array -  prints a string to stdout
 * @*a: pointer to int
 * @n: character to check
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}		
	}
	printf("\n");	
}