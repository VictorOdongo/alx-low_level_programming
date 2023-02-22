#include "main.h"
/**
 * print_alphabet - Print the lowercase alphabet using _putchar.
 * return: void (no value returned)
 */
void print_alphabet(void)
{
int i;
for (i = 0; i < 26; i++)
{
_putchar(i + 'a');
}
_putchar('\n');
}
