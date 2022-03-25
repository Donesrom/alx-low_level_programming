#include "main.h"

/**
 * string_toupper- functio that changes lowercase
 * letters to uppercase
 * @s: tring to modify
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}

