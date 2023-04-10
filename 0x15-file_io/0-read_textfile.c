#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read text file print to STDOUT
 * @filename: text file that will be read
 * @letter: num of letter to be read
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t o;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	o = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, o);

	free(buf);
	close(fd);
	return (w);
}
