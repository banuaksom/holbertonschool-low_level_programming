#include "sort.h"
/**
 * quick_sort - quick sort algorithm
 * @array: pointer to array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		quicksort(array, size, 0, size - 1);
}

/**
 * quicksort - recursion
 * @array: pointer to array
 * @size: number of elements in array
 * @start: start index
 * @end: end index
 */
void quicksort(int *array, size_t size, int start, int end)
{
	int part;

	if  (start < end)
	{
		part = partition(array, size, start, end);
		quicksort(array, size, start, part - 1);
		quicksort(array, size, part + 1, end);
	}
}

/**
 * partition - Partitions array based on pivot
 * @array: array to sort
 * @size: size of array
 * @start: start index
 * @end: end index
 * Return: position of partition
 */
int partition(int *array, size_t size, int start, int end)
{
	int pivot, i, j;

	pivot = array[end];
	i = start - 1;
	for (j = start; j < end; j++)
		if (array[j] < pivot)
		{
			i++;
			swap_arr(array, size, i, j);
		}
	i++;
	swap_arr(array, size, i, end);
	return (i);
}
/**
 * swap_arr - swaps certain array elements and prints
 * @array: pointer to an array
 * @size: size of the array
 * @i: first index of the element to swap
 * @j: second index of the element to swap
 */
void swap_arr(int *array, size_t size, int i, int j)
{
	int tmp;

	tmp = array[j];
	if (array[i] != array[j])
	{
		array[j] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}
