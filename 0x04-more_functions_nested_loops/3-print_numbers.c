#include "main.h"
#include "_putchar.c"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return success
 */

void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i);
}
_putchar('\n');
}

