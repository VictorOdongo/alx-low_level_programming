#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printsagf("Infinite loop incoming :(\n");

i = 0;
/**
* while (i < 10) - causes an infinite loop to occur
* {
* putchar(i);
* }
* printf - Prints a message to indicate that the infinite loop has been avoided */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
