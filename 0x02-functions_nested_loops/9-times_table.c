#include "main.h"
/**
 * times_table - Prints the 9 times table
 * Return: empty output
 */
void times_table(void)
{
int i;
int result;
for (i = 0; i <= 10; i++)
{
result = 9 * i;
if (result < 10)
{
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
