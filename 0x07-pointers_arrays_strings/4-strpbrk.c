#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strpbrk - Searches string for a set of bytes
 * @s: pointer to a string s
 * @accept: pointer to a string accept
 * Return: pointer to the first byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

