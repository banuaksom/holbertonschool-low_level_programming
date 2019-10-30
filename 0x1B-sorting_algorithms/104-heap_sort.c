#include "sort.h"
/**
 * heap_sort - heap sort
 * @array: pointer to an array
 * @size: array size
 */
void heap_sort(int *array, size_t size)
{
	int i;

	for (i = size / 2; i >= 0; i--)
		heapify(array, size, i, size);
	for (i = size - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		if (i != 0)
			print_array(array, size);
		heapify(array, i, 0, size);
	}
}

/**
 * heapify - makes the max heap tree
 * @array: pointer to array
 * @end: size of heap
 * @start: root index
 * @size: size of array
 */
void heapify(int *array, int end, int start, size_t size)
{
	int max = start;
	int left = 2 * start + 1;
	int right = 2 * start + 2;

	if (left < end && array[left] > array[max])
		max = left;

	if (right < end && array[right] > array[max])
		max = right;

	if (max != start)
	{
		swap(&array[start], &array[max]);
		print_array(array, size);
		heapify(array, end, max, size);
	}
}

/**
 * swap - swaps two elements
 * @a: first element
 * @b: second element
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
