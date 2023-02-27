#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses string
 * @s: String to be reversed
 * Return: Reversed string
 */
void rev_string(char *s)
{
	char len = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		len = s[i];
		s[i] = s[c];
		s[c] = len;
	}
}
