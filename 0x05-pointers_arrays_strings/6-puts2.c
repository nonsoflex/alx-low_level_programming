#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 *
 * @str: pareameter for string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int m;
	char *t = str;
	int longi = 0;
	int f = 0;

	while (*t != '\0')
	{
		t++;
		longi++;
	}
	f = longi - 1;
	for (m = 0; m <= f; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');

}
