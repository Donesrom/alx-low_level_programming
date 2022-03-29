#include "main.h"
#include <stddef.h>

/**
 * _strchr- function that locates a char in a string
 * @s: string to be checked
 * @c: character to eb located
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
int a;

while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}

