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

int f;
int s;
int t;
for (f = '0' ; f <= '9' ; f++)
{
for (s = f + 1 ; s <= '9' ; s++)
{
for (t = s + 1 ; t <= '9' ; t++)
{
putchar(f);
putchar(s);
putchar(t);
if ((f != '7') || (s != '8') || (t != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
