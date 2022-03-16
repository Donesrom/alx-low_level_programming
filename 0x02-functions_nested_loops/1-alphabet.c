#include <stdio.h>


/**
 * main -  function that prints the alphabet
 * followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);

}
