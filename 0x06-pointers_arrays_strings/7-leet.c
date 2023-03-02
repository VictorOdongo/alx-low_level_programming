#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @x: param x
 * Return: a string
 */
char *leet(char *x)
{
	char *ptr = x;
	char *leet_x = x;

	while (*ptr)
	{
		char c = *ptr;

		if (c == 'a' || c == 'A')
		{
			*leet_x = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			*leet_x = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			*leet_x = '0';
		}
		else if (c == 't' || c == 'T')
		{
			*leet_x = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			*leet_x = '1';
		}
		else
		{
			*leet_x = c;
		}
		ptr++;
		leet_x++;
	}
	*leet_x = '\0';
	return (x);
}
