#include "holberton.h"
/**
  * flip_bits - returns the number of bits
  * @n: number passed
  * @m: number passed
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	int i = 0;

	while (num)
	{
		if (num & 1)
			i++;
		num = num >> 1;
	}
	return (i);
}
