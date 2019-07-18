#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - allocates memory
  * @b: character to check
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
