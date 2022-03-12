#include <stdio.h>

/**
*main -  program that prints the alphabet in lowercase
*Description : You can only use the putchar
*return : 0
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
