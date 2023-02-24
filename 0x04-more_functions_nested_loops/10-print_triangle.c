#include "main.h"
/**
 * print_triangle - Prints triangle followed by new line
 * Return: triangle of '#'
 * @size: size of triangle
 */
void print_triangle(int size)
{
int i, j;
if (!(size <= 0))
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((j + i) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
