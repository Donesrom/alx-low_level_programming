#include <stdio.h>

/**
 *print_alphabet_x10 - function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *Return Always 0 (Success)
 */

void print_alphabet_x10(void)

{
char ch;
int i;

i = 0;

while (i < 10)
{
ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar(\n);
}
