#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
