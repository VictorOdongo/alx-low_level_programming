#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints array of integer
 * @a: array of integer
 * @n: Number of values to be printed
 * Return: n elements of array of integers
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
