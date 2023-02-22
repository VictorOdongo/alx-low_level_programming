#include "main.h"
/**
 * print_sign - Prints sign based on condition
 * @n: argument passed
 * Return: 1 if n greater than 0, 0 if n is 0, -1 if n is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('_');
return (-1);
}
}
