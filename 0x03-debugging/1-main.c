#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/**
* while (i < 10) - causes an infinite loop to occur
* {
* putchar(i);
* }
*/
printf("Infinite loop avoided! \\o/\n"); /* Printf - Shows end of loop */

return (0);
}
