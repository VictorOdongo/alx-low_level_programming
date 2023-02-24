#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print from 1 to 100
 * Return: 0
 * 3 multiples print Fizz instead of number
 * 5 print Buzz instead of number
 * 3 & 5 printFfizzBuzz
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i == 100)
{
printf("Buzz ");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
