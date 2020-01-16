#include "search_algos.h"
/**
 * print_array - prints all the elements in the array
 * @array: pointer to the array
 * @l: left index of the array
 * @r: right index
 * Return: void
 */
void print_array(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}
/**
 * binarySearch - searches value in sorted array using Binary search
 * @array: pointer to first element of array
 * @l: first index of the array
 * @r: end index of the array
 * @value: value
 * Return: index where value is located
 * -1 if value not present or array is NULL
 */
int binarySearch(int *array, int l, int r, int value)
{
	int mid;

	if (r >= l)
	{
		print_array(array, l, r);
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binarySearch(array, l, mid - 1, value));
		return (binarySearch(array, mid + 1, r, value));
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to look for
 * Return: value or -1 if it's not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, last;

	if (array[0] == value)
		return (0);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i >= size)
		last = size - 1;
	else
		last = i;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, last);
	return (binarySearch(array, i / 2, last, value));
}
