#include "holberton.h"
/**
   * main - Entry point
   *
   * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "Holberton";
	int i;


	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
