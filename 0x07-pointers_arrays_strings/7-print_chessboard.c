#include "main.h"

/**
 * print_chessboard - prints the chessboard in 2D
 * @a: 2D array for char
 *
 * Return: always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int e, f;

	e = f = 0;
	while (e < 8)
	{
		f = 0;
		while (f < 8)
		{
			_putchar(a[e][f]);
			f++;
		}
		_putchar('\n');
		e++;
	}

}
