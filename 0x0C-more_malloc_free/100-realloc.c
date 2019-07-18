#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _realloc - reallocates a memory block
  * @ptr: character to check
  * @old_size: character to check
  * @new_size: character to check
  * Return: void
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
		return (p);
	for (i = 0; i < old_size; i++)
	{
		*(p + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (p);
}
