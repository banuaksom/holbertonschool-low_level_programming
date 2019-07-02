#include "holberton.h"
/**
 * _puts -  prints a string to stdout
 * @*str: pointer to string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}