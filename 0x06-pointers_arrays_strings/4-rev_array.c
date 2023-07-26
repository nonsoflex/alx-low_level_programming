#include "main.h"

/**
* reverse_array - function to reverse an array
*
* @a: array input parameter
*
* @n: number of elements of array
*
* Return: always 0 (Success)
*/

void reverse_array(int *a, int n)
{
	int x, temp, e;

	x = 0;
	e = n - 1;
	while (x < e)
	{
		temp = a[x];
		a[x] = a[e];
		a[e] = temp;
		x++;
		e--;
	}
}
