#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _atoi - converts string to an integer
 * @s: pointer to string
 * Return: integer from string
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int signo = 1;

	while ((s[i] < '0' || s[i] > '0') && s[i] != 0)
	{
		if (s[i] == '_')
			signo *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	signo *= -1;
	return (n * signo);
}
