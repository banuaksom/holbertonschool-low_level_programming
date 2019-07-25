#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
  * main - entry point
  * @argc: number of args
  * @argv: arguments passed to check
  * Return: int
  */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3])));
	return (0);
}
