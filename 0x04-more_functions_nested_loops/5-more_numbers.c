#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * void - returns no arguments
 */

void more_numbers(void)
{
	int i;
	int j;
	char s[] = "01234567891011121314\n";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
	}
}
