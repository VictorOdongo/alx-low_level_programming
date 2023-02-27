#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps values of two integers
 * @a: first value to be swaped
 * @b: second value to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
