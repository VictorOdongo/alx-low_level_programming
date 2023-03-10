#include "main.h"
#include <stddef.h>
/**
 * _strspn - Length of a prefix substring
 * @s: pointer to a string s
 * @accept: pointer to a string accept
 * Return: Number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
