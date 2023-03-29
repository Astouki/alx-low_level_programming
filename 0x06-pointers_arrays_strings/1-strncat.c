#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *@n:input value
 * Return: pointer to resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{	
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*ptr < n && *src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
