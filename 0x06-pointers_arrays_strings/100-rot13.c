#include "main.h"
#include <stdio.h>

/**
* rot13 - encoder rot13
* @s: pointer to string parameter
*
* Return: 0 (success)
*/

char *rot13(char *s)
{
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int m;
	int n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[m] == data1[n])
			{
				s[m] = datarot[n];
				break;
			}
		}
	}
	return (s);
}
