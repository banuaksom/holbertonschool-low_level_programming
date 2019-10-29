#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to an array
 * @size: number of elements in an array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int flag;
	int *cur, *min;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		cur = &array[i];
		min = &array[i];
		flag = 0;
		for (j = i; j < size; j++)
		{
			if (*min > array[j])
			{
				min = &array[j];
				flag = 1;
			}
		}
		if (flag)
		{
			swap(cur, min);
			print_array(array, size);
		}
	}
}
/**
 * swap - swaps two elements passed
 * @a: first element
 * @b: second element
 */

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
