#include "sort.h"
/**
 * bitonic_sort - bitonic sort
 * @array: pointer to the array
 * @size: size of the array
 */
void bitonic_sort(int *array, size_t size)
{
	int up = 1;

	if (!array || size < 2)
		return;
	bitonic_recursion(array, size, 0, size, up);
}
/**
 * swap_arr2 - swaps certain array elements and prints
 * @array: pointer to an array
 * @i: first index of the element to swap
 * @j: second index of the element to swap
 */
void swap_arr2(int *array, int i, int j)
{
	int tmp;

	tmp = array[j];
	if (array[i] != array[j])
	{
		array[j] = array[i];
		array[i] = tmp;
	}
}
/**
 * bitonic_compare - compares two elements in an array
 * @array: pointer to the array
 * @idx1: first element
 * @idx2: second element
 * @dir: flag for direction (1 - up, 0- down)
 */
void bitonic_compare(int *array, int idx1, int idx2, size_t dir)
{
	if ((array[idx1] > array[idx2]) == dir)
		swap_arr2(array, idx1, idx2);
}
/**
 * bitonic_merge - merges sub_arrays
 * @array: pointer to the array
 * @start: start index
 * @count: flag
 * @dir: direction
 */
void bitonic_merge(int *array, size_t start, size_t count, int dir)
{
	size_t k = 0, i;

	if (count > 1)
	{
		k = count / 2;
		for (i = start; i < start + k; i++)
			bitonic_compare(array, i, i + k, dir);
		bitonic_merge(array, start, k, dir);
		bitonic_merge(array, start + k, k, dir);
	}
}
/**
 * bitonic_recursion - recursion function
 * @array: pointer to the array
 * @size: sixe of the array
 * @start: start index
 * @count: flag;
 * @dir: direction
 */
void bitonic_recursion(int *array, size_t size,
		size_t start, size_t count, int dir)
{
	int k;

	if (count > 1)
	{
		if (dir == 1)
			printf("Merging [%lu/%lu] (UP):\n", count, size);
		if (dir == 0)
			printf("Merging [%lu/%lu] (DOWN):\n", count, size);
		print_array(array + start, count);
		k = count / 2;
		bitonic_recursion(array, size, start, k, 1);
		bitonic_recursion(array, size, start + k, k, 0);
		bitonic_merge(array, start, count, dir);

		if (dir == 1)
			printf("Merging [%lu/%lu] (UP):\n", count, size);
		if (dir == 0)
			printf("Merging [%lu/%lu] (DOWN):\n", count, size);
		print_array(array + start, count);
	}
}
