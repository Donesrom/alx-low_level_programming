#include <stdio.h>
#include "main.h"


/**
*largest_number - largest of three integers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: 0
*/


int largest_number(int a, int b, int c)
{

int largest;

if (a >= b && a >= c)
{
largest = a;
}
if (b >= a && b >= c)
{
largest = b;
}
if (c >= a && c >= b)
{
largest = c;
}
return (largest);

}
