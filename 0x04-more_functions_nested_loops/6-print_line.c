#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n:the number of times the character _ should be printed
 * Return: Always 0
 */
void print_line(int n)
{
int i = 0;
if (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
