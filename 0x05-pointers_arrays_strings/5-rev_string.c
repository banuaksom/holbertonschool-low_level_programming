#include "holberton.h"
/**
 * rev_string - reverses a string
 * @*s: pointer to string
 */

void rev_string(char *s)
{
	int i, end, temp;

	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
		
	end = length - 1;
	
	for (i = 0; i < end; i++, end--)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;	
	}	
}