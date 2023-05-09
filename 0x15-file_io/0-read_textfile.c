#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function that read the text file print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: The actual number of letter read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t q;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	q = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, q);

	free(buf);
	close(fd);
	return (v);
}
