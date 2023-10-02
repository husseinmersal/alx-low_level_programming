#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-a function that  Reads a text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t writ;
	ssize_t tel;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tel = read(fd, buf, letters);
	writ = write(STDOUT_FILENO, buf, tel);

	free(buf);
	close(fd);
	return (writ);
}

