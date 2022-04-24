#include "main.h"


/**
 * _memset- function that fills a memory with a constant byte
 * @s: memory area t be flled
 * @b: char to copy
 * @n: numberof times to copy b
 * Return: pointer to the memory area s
 */



char *_memset(char *s, char b, unsigned int n)  
{
unsigned int i;
for (i = 0; i < n; i++)    
{
s[i] = b;
}
return (s);

}