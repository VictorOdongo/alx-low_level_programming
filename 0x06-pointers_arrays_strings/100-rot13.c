#include "main.h"
#include <ctype.h>
/**
 * rot13 - rotates by 13 places
 * @str: pointer to a string
 * Return: void
 */
char *rot13(char *str)
{
	char *s = str;

	while (*s)
	{
		if (isalpha(*s))
		{
			char base = isupper(*s) ? 'A' : 'a';
			*s = (char)(((*s - base + 13) % 26) + base);
		}
		s++;
	}
	return (str);
}
