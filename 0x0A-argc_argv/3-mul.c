#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: the number of command line arguments
 * @argv: the array of size args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1, result = 1;

	for ( ; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	if (argc >= 3)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
