#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - prints exactly numbers,
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
if (n == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
