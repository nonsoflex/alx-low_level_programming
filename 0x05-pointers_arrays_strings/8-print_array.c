#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: spring parameter
 *
 * @n: paramter of element
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
	if (m == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
