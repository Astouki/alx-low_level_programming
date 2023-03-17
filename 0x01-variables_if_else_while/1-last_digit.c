#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: 'get the last digit of number'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("the last digit %i is %i and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
printf("the last digit %i is %i and is zero\n", n, ld);
}
else
{
printf("the last digit %i is %i and is less than 6 and not 0\n", n, ld);
}
return (0);
}

