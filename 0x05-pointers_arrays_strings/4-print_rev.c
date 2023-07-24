#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 *
 * @s: Spring parameter
 *
 * Returns: 0 (Success)
 */

void print_rev(char *s)
{
	int temp = 0;
	int y;

	while (*s != '\0')
	{
		temp++;
		s++;
	}
	s--;
	for (y = temp; y > 0; y--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
