#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _print_rev_recursion - Prints string in reverse
 * @s: pointer to string
 * Return: String in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
