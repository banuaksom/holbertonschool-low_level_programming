#include "holberton.h"
/**
 *_abs - compute the absolute value of an intege
 *@number: number to check
 *
 * Return: int
 */
int _abs(int number)
{
	if (number >= 0)
	{
		return (number);
	}
	else
	{
		number = (-1) * number;
		return (number);
	}
}
