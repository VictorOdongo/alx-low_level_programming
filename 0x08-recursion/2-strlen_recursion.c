#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _strlen_recursion - Returns length of string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
