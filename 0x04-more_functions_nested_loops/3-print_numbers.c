#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers 0 to 9
 * Return: 0-9 followed by new line
 * _putchar - outputs the numbers
 */
int _putchar(char c)
{
return putchar(c);
}
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
}
