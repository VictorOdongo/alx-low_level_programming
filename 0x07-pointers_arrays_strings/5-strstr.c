#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strstr - Locates a substring
 * @haystack: pointer to a string haystack
 * @needle: pointer to a string needle
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
