#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: ...
 * @letters: ...
 *
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
