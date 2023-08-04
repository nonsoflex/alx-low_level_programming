#include "main.h"

/**
* _strcmp - function that compares 2 strings
*
* @s1: input parameter for first string
*
* @s2: input parameter for second string
*
* Return: always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
