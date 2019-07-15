#include <stdio.h>
/**
 * main - entry point
 * @argc: the number of command line arguments
 * @argv: the array of size args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for ( ; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
