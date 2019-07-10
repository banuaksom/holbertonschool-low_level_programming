#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: haracter to check
 * @size: character to check
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int square = size * size;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0, j = size - 1; i < square; i = i + size + 1, j = j + size - 1)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[j];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
