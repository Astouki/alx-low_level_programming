#include "main.h"
#define NULL 0
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string to be checked
 * @c: character
 * Return:  a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int j = 0;
while (s[j] != c)
j++;
{
if (s[j] == c)
return (&s[j]);
else
return (NULL);
}
}
