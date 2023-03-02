#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses array
 * @a: Array of integers
 * @n: Number of elements to be swaped
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
