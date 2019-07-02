#include "holberton.h"
/**
 * print_rev -  prints a string in reverse
 * @*s: pointer to string
 */

void print_rev(char *s)
{
	int i, end;

	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
		
	end = length - 1;
	
	for (i = end; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');	
}