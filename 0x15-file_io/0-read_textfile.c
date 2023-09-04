#include "main.h"

/**
* read_textfile - reads a text file and prints it to standard out
*
* @filename: name of filename
*
* @letters: how many letters to read and print
*
* Return: 0 if error, otherwise number letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, re, wr;
	char *buf;

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	re = read(fd, buf, letters);
	close(fd);
	if (re < 0)
		{
		free(buf);
		return (0);
		}
	wr = write(STDOUT_FILENO, buf, re);
	if (wr <= 0)
	{
	free(buf);
	return (0);
	}
		free(buf);
		return (wr);
}
