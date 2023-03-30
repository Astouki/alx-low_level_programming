#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int c;
for (c = 0; src[c] != '\0' && c < n; c++)
{
dest[c] = src[c];
}
for (; c  < n; c++)
{
dest[c] = '\0';
}
return (dest);
}
