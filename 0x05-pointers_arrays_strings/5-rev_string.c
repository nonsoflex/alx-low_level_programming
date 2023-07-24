#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: spring parameter
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int x;
	int counter = 0;
	char rev = s[0];

	while (s[counter] != '\0')
	counter++;
	for (x = 0; x < counter; x++)
	{
		counter--;
		rev = s[x];
		s[x] = s[counter];
		s[counter] = rev;
	}
}
