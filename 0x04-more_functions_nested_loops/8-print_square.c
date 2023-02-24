#include "main.h"
/**
 * print_square - Prints a square
 * @size: size of the square
 * Return: # square
 */
void print_square(int size)
{
int row, column;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (column = 1; column <= size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
