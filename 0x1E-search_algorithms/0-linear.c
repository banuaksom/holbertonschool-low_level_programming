#include "search_algos.h"
/**
 * linear_search - searches for value in array of integers using Linear search
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search
 * Return: first index where value is located
 * -1 if value not in array or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
