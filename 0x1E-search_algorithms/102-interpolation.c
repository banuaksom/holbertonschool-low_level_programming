#include "search_algos.h"
/**
 * interpolation_search - searches for value in sorted array of integers
 * using Interpolation search algorithm
 * @array: array provided
 * @size: size of array
 * @value: value
 * Return: index of array where value is located, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int li = 0, ri = size - 1;
	size_t pos;

	if (array)
	{
		while (li <= ri && value >= array[li] && value <= array[ri])
		{
			if (li == ri)
			{
				if (array[li] == value)
					return (li);
			}
			pos = li + ((double)(ri - li) / (array[ri] - array[li]))
				* (value - array[li]);
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				li = pos + 1;
			else
				ri = pos - 1;
		}
		pos = li + ((double)(ri - li) / (array[ri] - array[li]))
			* (value - array[li]);
		printf("Value checked array[%lu] is out of range\n", pos);
	}
	return (-1);
}
