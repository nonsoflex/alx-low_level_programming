#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for an integer
*
* @array: pointer to the array
*
* @size: size of the array
*
* @cmp: pointer to the function
*
* Return: Always 0(Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
