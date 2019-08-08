#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number passed to convert
 * @index: index of the bit from left to right
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return (n >> index & 1);
	else
		return (-1);
}
