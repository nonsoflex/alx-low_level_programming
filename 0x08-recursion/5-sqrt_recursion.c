#include "main.h"
/**
* checker - function that checks the input
* number from n to the base number
*
* @n: input params to b squared and compared against the base
* @base: input params for base to be checked
*
* Return: square root of the number base
*/

int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return (checker(n + 1, base));
}

/**
* _sqrt_recursion - a function the natural square
* root of a number n
*
* @n: number to check
*
* Return: the natural square root of natural n
*/

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
