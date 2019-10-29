#include "sort.h"
/**
 * counting_sort - Counting sort algorithm
 * @array: Pointer to array to sort
 * @size: Size of array
 */
void counting_sort(int *array, size_t size)
{
	size_t i, max, k, j;
	int *sorted, *new_array;

	if (!array || size < 2)
		return;
	max = max_arr(array, size) + 1;

	sorted  = malloc(sizeof(int) * size);
	new_array = calloc(max, sizeof(int));
	for (i = 0; i < size; i++)
		new_array[array[i]]++;
	for (i = 1; i < max; i++)
		new_array[i] += new_array[i - 1];
	print_array(new_array, max);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j + 1 < max; j++)
		{
			if (new_array[j + 1] != new_array[j])
			{
				k = 0;
				while ((new_array[j + 1] - new_array[j]) - k)
				{
					sorted[i] = j + 1;
					i++;
					k++;
				}
			}
		}
	}
	for (i = 0; i < size; i++)
		array[i] = sorted[i];
	free(sorted);
	free(new_array);
}
/**
 * max_arr - returns max value in array
 * @array: pointer to an array
 * @size: number of elements in an array
 * Return: max value
 */
int max_arr(int *array, size_t size)
{
	int max;
	size_t i;

	max = 0;
	for (i = 0; i < size; i++)
		if (max < array[i])
			max = array[i];
	return (max);
}
