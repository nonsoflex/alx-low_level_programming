#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, x = 0, y = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (x <= max - min)
		arr[x++] = y++;
	return (arr);
}
