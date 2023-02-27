#include "main.h"
/**
 * *_strcpy - Copies the string pointed to by src
 * @dest: Points to buffer
 * @src: Points to string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
