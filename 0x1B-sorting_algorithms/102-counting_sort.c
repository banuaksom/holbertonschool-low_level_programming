#include "sort.h"
/**
 * counting_sort - Counting sort algorithm
 * @array: Pointer to array to sort
 * @size: Size of array
 */
void counting_sort(int *array, size_t size)
{
	size_t i, max;
	int *sorted, *new_array;

	if (!array || size < 2)
		return;
	max = max_arr(array, size) + 1;

	sorted  = calloc(size, sizeof(int));
	new_array = calloc(max, sizeof(int));
	for (i = 0; i < size; i++)
		new_array[array[i]]++;
	for (i = 1; i < max; i++)
		new_array[i] += new_array[i - 1];
	print_array(new_array, max);
	for (i = 0; i < size; i++)
	{
		sorted[new_array[array[i]] - 1] = array[i];
		new_array[array[i]]--;
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
