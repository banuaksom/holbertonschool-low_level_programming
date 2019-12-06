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

int pair1;
int pair2;
int n1;
int n2;
int n3;
int n4;

{
for (pair2 = pair1 + 1 ; pair2 <= 99 ; pair2++)
{
n1 = pair1 / 10;
n2 = pair1 % 10;
n3 = pair2 / 10;
n4 = pair2 % 10;
putchar(n1 + 48);
putchar(n2 + 48);
putchar(' ');
putchar(n3 + 48);
putchar(n4 + 48);
if (n1 != 9 || n2 != 8 || n3 != 9 || n4 != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
