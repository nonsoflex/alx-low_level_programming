#include <stdio.h>

/**
* main - prints out all of the arguments passed to it.
* @argc: argument count
* @argv: argument vector
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}
	return (0);
}
