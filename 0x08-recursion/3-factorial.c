#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * factorial - returns factorial of given number
 * @n: pointer to the number
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
