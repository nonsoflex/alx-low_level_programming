#include "main.h"
/**
* print_numbers - prints integers from 0 - 9
* followed by a new line
* Return: Always 0
*/
void print_numbers(void)
{
int c;

for (c = 0; c < 10; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
