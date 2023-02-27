#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Returns length of string
 * Return: length
 * @s: String
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
