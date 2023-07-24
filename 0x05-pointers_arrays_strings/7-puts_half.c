#include "main.h"

/**
 * puts_half - function should print the second half of the string
 *
 * @str: string parameters
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int x, y, len;

	len = 0;

	for (x = 0; str[x] != '\0'; x++)
		len++;
	y = (len / 2);

	if ((len % 2) == 1)
		y = ((len + 1) / 2);
	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');

}
