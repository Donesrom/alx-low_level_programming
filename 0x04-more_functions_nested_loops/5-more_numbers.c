#include "main.h"


/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: Success
 */

void more_numbers(void)
{
int n, j;

for (n = 0; n < 10; n++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
 _putchar('\n');
}
}

