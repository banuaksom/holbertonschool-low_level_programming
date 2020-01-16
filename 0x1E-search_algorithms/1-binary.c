#include "search_algos.h"
/**
 * binary_search - searches value in sorted array using Binary search
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value
 * Return: index where value is located
 * -1 if value not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left_idx = 0, right_idx = size - 1;

	while (array && left_idx <= right_idx)
	{
		printf("Searching in array: ");
		for (i = left_idx; i <= right_idx; i++)
		{
			printf("%d", array[i]);
			if (i < right_idx)
				printf(", ");
		}
		printf("\n");

		i = (left_idx + right_idx) / 2;
		if (array[i] < value)
			left_idx = i + 1;
		else if (array[i] > value)
			right_idx = i - 1;
		else
			return (i);
	}
	return (-1);
}
