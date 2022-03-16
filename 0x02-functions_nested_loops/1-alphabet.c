#include <stdio.h>


/**
 * print_alphabet - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet(void)

{

char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');


}
