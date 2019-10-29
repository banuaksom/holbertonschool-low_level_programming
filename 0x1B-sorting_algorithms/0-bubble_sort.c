#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: number of elements in the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int flag;

	if (!array || size < 2)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 0; i + 1 < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
/**
 * swap - swaps tow elements passed
 * @a: first element
 * @b: second element
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
