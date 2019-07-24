#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - executes a function given as a parameter
  * @array: character to check
  * @size: size of array
  * @action: pointer to function
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
