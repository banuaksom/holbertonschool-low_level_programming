#include "search_algos.h"
/**
 * jump_search - searches value in sorted array using Jump search algorithm
 * @array: pointer to first element 
 * @size: number of elements in array
 * @value: value being searched
 * Return: first index where value is located
 * -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int step = sqrt(size);

	if (array)
	{
		while (array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i += step;
			if (i >= size)
				break;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
		i -= step;
		while (array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i++;
			if (i == size)
				return (-1);
		}
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
