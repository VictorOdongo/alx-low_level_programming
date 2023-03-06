#include "main.h"
/**
 * _memset - Fills memory with constant byte
 * @s: pointer to start of memory
 * @b: byte to fill the  memory area
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
