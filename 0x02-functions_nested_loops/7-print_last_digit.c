#include "main.h"
/**
 * print_last_digit - Returns value of last digit
 * @n: passed argument
 * Return: the last digit
 */
int print_last_digit(int n)
{
int x;
x = n % 10;
if (x < 0)
x *= -1;
_putchar(x + '0');
return (0);
}
