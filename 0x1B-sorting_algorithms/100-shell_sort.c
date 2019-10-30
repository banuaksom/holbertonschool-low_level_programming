#include "sort.h"
/**
  * shell_sort - shell sort
  * @array: pointer to an array
  * @size: size of the array
  */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int tmp = 0;

	if (!array || size < 2)
		return;
	gap = 1;
	while (gap < size)
	{
		tmp = gap;
		gap = 3 * gap + 1;
	}
	gap = tmp;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
