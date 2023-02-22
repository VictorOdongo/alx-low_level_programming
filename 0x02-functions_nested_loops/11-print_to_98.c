#include "main.h"
/**
 * print_to_98 -Prints from n to 98
 * @n: The number to start printing
 * Return: outputs the numbers to 98
 */
void print_to_98(int n)
{
while (n <= 98)
{
int tmp = n;
while (tmp > 0)
{
int digit = tmp % 10;
_putchar(digit + '0');
tmp /= 10;
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
_putchar('\n');
}
