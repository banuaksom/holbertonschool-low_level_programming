#include "holberton.h"
/**
   * main - Entry point
   *
   * Return: Always 0 (Success)
 */

int main(void)
{
	char *s = "Holberton\n";

	while (*s)
	{
		_putchar(*s++);
	}
	return (0);
}
