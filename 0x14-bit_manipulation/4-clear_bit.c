#include "holberton.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: number passed
  * @index: index from left to right
  * Return: 1 if success, -1 if fail
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}

