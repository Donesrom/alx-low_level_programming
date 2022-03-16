#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 *@n: int to check
 *Return: 1 and prints + if n > 0,
 * 0 and prints 0 if n = 0
 *-1 and prints - if n < 0
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else if (n < 0)
{
putchar('-');
}
return (-1);

}
