#include "main.h"
#include <stddef.h>
/**
 * print_chessboard - Prints chessboard
 * @a: set of characters in array
 * Return: contents of array in form of chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
