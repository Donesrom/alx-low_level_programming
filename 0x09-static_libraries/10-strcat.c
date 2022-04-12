#include "main.h"


/**
 * _strcat - function that concatenates two strings.
 * @dest:pointer to the destination array where the content is to be copied
 * @src:string to be copied
 * Return: a pointer to the resulting string dest
 */


char *_strcat(char *dest, char *src)
  
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++; 
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
