#include "sort.h"
/**
  * radix_sort - sorts an array of integers in ascending order
  * @array: pointer to array
  * @size: size of the array
  */
void radix_sort(int *array, size_t size)
{
	int max, diviser;

	if (!array || size < 2)
		return;
	max = max_arr(array, size);
	for (diviser = 1; max / diviser > 0; diviser *= 10)
	{
		count_sort(array, size, diviser);
		print_array(array, size);
	}
}
/**
 * max_arr - returns max value in array
 * @array: pointer to an array
 * @size: number of elements in an array
 * Return: max value
 */
int max_arr(int *array, size_t size)
{
	int max = 0;
	size_t i;

	for (i = 0; i < size; i++)
		if (max < array[i])
			max = array[i];
	return (max);
}
/**
  * count_sort - does counting sort of array by the digit 'diviser'
  * @array: pointer to array
  * @size: size of the array
  * @diviser: last digit of number
  */
void count_sort(int *array, int size, int diviser)
{
	int *new_array;
	int count[10] = {0}, i;

	new_array = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		count[(array[i] / diviser) % 10]++;
	print_array(count, 10);
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	print_array(count, 10);
	for (i = size - 1; i >= 0; i--)
	{
		new_array[count[(array[i] / diviser) % 10] - 1] = array[i];
		count[(array[i] / diviser) % 10]--;
	}
	print_array(count, 10);
	for (i = 0; i < size; i++)
		array[i] = new_array[i];
	free(new_array);
}
