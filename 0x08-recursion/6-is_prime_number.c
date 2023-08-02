#include "main.h"

/**
* checker - function that checks recursively the
* input from is_prime _number
*
* @n: number to checker
* @base: base number to check
*
* Return: 1 if n is a prime, else return 0 otherwise
*/

int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
	{
		return (0);
	}
	else if (n == base - 1)
	{
		return (1);
	}
	else if (base > n)
	{
		return (checker(n + 1, base));
	}
	return (1);
}

/**
* is_prime_number - functions that check if the
* number is a prime number
*
* @n: input params to check
*
* Return: 1 if n is a prime, else return 0 otherwise
*/

int is_prime_number(int n)
{
	return (checker(2, n));
}
