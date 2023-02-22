#include "main.h"
/**
 * print_last_digit - Returns value of last digit
 * @n: passsed argument
 * Return: the last digit
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
x = n % 10;
_putchar(x + '0');
return (x);
}
