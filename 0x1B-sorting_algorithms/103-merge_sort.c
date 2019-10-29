#include "sort.h"
/**
 * merge_sort - merge sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 */
void merge_sort(int *array, size_t size)
{
	size_t i;
	int *new_arr;

	if (!array || size < 2)
		return;
	new_arr = malloc(size * sizeof(int));
	if (!new_arr)
		return;
	for (i = 0; i < size; i++)
		new_arr[i] = array[i];
	divide(array, new_arr, 0, size);
	free(new_arr);
}

/**
 * divide - divides array into subarrays
 * @array: pointer to an array
 * @new_arr: copy of array
 * @left: start index
 * @right: end index
 */
void divide(int *array, int *new_arr, size_t left, size_t right)
{
	int middle;

	if (right - left < 2)
		return;
	middle = (right + left) / 2;
	divide(new_arr, array, left, middle);
	divide(new_arr, array, middle, right);
	join_arr(new_arr, array, left, middle, right);
}

/**
 * join_arr - changes the values and prints the process
 * @array: pointer to an array
 * @new_arr: copy of array
 * @left: start index
 * @middle: middle of the array
 * @right: end index
 */
void join_arr(int *array, int *new_arr, size_t left, size_t middle,
	     size_t right)
{
	size_t i = left,  j = middle, k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	for (k = left; k < middle; k++)
	{
		if (k < middle - 1)
			printf("%d, ", array[k]);
		else
			printf("%d\n", array[k]);
	}
	printf("[right]: ");
	for (k = middle; k < right; k++)
	{
		if (k < right - 1)
			printf("%d, ", array[k]);
		else
			printf("%d\n", array[k]);
	}
	for (k = left; k < right; k++)
	{
		if (i < middle && (j >= right || array[i] <= array[j]))
		{
			new_arr[k] = array[i];
			i++;
		}
		else
		{
			new_arr[k] = array[j];
			j++;
		}
	}
	printf("[Done]: ");
	for (k = left; k < right; k++)
	{
		if (k < right - 1)
			printf("%d, ", new_arr[k]);
		else
			printf("%d\n", new_arr[k]);
	}
}
