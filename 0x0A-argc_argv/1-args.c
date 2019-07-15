#include <stdio.h>
/**
 * main - entry point
 * @argc: the number of command line arguments
 * @argv: the array of size args
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void) **argv;
	printf("%d\n", argc - 1);
	return (0);
}
