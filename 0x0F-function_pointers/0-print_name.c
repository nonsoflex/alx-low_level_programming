#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function thats prints a name passed to it
 *
 * @name: char to display to the stdout
 *
 * @f: apointer function
 *
 * Return: 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	(*f)(name);
}
