#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: occurence of character
 * Return: pointer to first occurrence of character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
