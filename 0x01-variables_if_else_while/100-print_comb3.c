#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;
int j;

for (i = '0' ; i <= '9' ; i++)
{
for (j = i + 1 ; j <= '9' ; j++)
{
putchar(i);
putchar(j);
if ((j <= '9') && (i < '8'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}