#include "main.h"
/**
 * string_toupper - changes all lowercase letters of to uppercase.
 * @s: string
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
int j;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] >= 'a' && s[j] <= 'z')
{
s[j] = s[j] - 32;
}
}
return (s);
}
