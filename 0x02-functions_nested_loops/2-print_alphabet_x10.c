#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times.
 * Return: void (no value returned)
 */
void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(j + 'a');
}
_putchar('\n');
}
}
