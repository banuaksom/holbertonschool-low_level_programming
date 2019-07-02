#include "holberton.h"
/**
 * int _strlen -  returns the length of a string
 * @*s: pointer to string
 */

int _strlen(char *s)
{
	int counter = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}	
	return (counter);
}
