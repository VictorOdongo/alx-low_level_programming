#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to a string
 * Return: Printed string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
