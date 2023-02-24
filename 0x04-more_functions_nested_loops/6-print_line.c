#include "main.h"
/**
 * print_line - Drwas a straight line in terminal
 * Return: void
 * @n: input number
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

