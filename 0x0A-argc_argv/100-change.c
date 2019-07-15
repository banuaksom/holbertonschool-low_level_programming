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
	int coins[5] = {25, 10, 5, 2, 1};
	int cents = 0, i;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (num / coins[i] > 0)
		{
			cents += num / coins[i];
			num = num % coins[i];
		}
	}
	printf("%d\n", cents);
	return (0);
}
