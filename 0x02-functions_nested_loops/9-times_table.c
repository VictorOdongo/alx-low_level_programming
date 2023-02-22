#include "main.h"
/**
 * times_table - Prints the 9 times table
 * Return: empty output
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j == 0)
{
_putchar('0');
}
else if (result < 10)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
