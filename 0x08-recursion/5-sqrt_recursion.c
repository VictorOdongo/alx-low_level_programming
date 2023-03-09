#include "main.h"
#include <stdio.h>
#include <math.h>

int _sqrt(int, int);
/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: pointer to the number
 * Return: Natural squre root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
