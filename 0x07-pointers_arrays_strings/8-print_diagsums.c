#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
*
* @a: pointer to 2D array.
* @size: which diagonal to add.
*
* Return: always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
int x, S1, S2;

S1 = 0;
S2 = 0;

for (x = 0; x < (size * size); x++)
{
if (x % (size + 1) == 0)
S1 += a[x];
if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
S2 += a[x];
}
printf("%d, %d\n", S1, S2);
}
