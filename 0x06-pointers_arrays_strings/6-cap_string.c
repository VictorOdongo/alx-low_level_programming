#include "main.h"
/**
 * cap_string - capitalisation function
 * @x: string parameter
 * Return: capitalised string
 */
char *cap_string(char *x)
{
	char sp[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',};
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == sp[i]) && (x[a] >= 97 && x[a] <= 122))
			{
				x[a] = x[a] - 32;
			}
			i++;
		}
		a++;
	}
	return (x);
}
