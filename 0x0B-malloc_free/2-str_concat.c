#include "main.h"

/**
 *_strlen - count arrray
 *@s: array of elments
 *Return: x
 */

int _strlen(char *s)
{
	unsigned int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 *str_concat - back a pointer to array
 *@s1: Array one
 *@s2: Array two
 *Return: Always an array dinamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int x, y, size;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	for (x = 0; *(s1 + x) != '\0'; x++)
		*(dst + x) = *(s1 + x);

	for (y = 0; *(s2 + y) != '\0'; y++)
	{
		*(dst + x) = *(s2 + y);
		x++;
	}

	return (dst);
}
