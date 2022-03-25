#include "main.h"


/**
 * _strncat-function that concatenates two strings.
 * @dest:destination string
 * @src:source string
 * @n:number of bytes to concancate
 * Return:a pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{

dest[i] = src[i];
i++;

}

while (i < n)
{

dest[i] = '\0';
i++;
}
return (dest);
}
