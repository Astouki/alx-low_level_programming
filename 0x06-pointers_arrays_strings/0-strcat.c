#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
char *ptr =  dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
