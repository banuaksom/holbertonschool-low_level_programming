#include "holberton.h"
/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: binary number
  * @index: index of the bit from left to right
  * Return: 1 if success, -1 if fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | 1 << index;
		return (1);
	}
	return (-1);
}

