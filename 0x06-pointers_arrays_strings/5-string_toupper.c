#include "main.h"

/**
* string_toupper - function that changes all lowercase to uppercase
*
* @n: pointer parameter
*
* Return: n (success)
*/

char *string_toupper(char *n)
{
int a;

a = 0;
while (n[a] != '\0')
{
if (n[a] >= 97 && n[a] <= 122)
n[a] = n[a] - 32;
a++;
}
return (n);
}
