#include "main.h"

/**
* leet - a function that encodes a string into 1337
*
* @s: string input parameter
*
* Return: s (success)
*/

char *leet(char *s)
{
int b, c = 0;
int sl[] = {97, 101, 111, 116, 108};
int ul[] = {65, 69, 79, 84, 76};
int n[] = {52, 51, 48, 55, 49};

while (s[c] != '\0')
{
for (b = 0; b < 5; b++)
{
if (s[c] == sl[b] || s[c] == ul[b])
{
s[c] = n[b];
break;
}
}
c++;
}
return (s);
}
