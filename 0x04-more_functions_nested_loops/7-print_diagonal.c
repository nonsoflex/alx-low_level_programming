#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal
*
* @n: number of times / should be printed
*
* Return: If n is 0 or less, the function should only print a \n
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (x = 0 ; x < n ; x++)
{
for (y = 0 ; y < n ; y++)
{
if (y == x)
_putchar('\\');
else if (y < x)
_putchar(' ');
}
_putchar('\n');
}
}
}
