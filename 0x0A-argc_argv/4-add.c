#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- function that adds two positive numbers
 * @argc: parameter1
 * @argv: parameter2
 * Return: int
 */

int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("%d\n", 0);
}

else
{
for (i = 1; i < argc; i++)
{
if (!(*argv[i] >= '0' && *argv[i] <= '9'))
{
printf("Error\n");
return (1);
}
else
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}




