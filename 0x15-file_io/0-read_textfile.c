#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file and print it to standard output
 * @filename: text file
 * @letters: n letters to read
 * Return: n number of bytes or 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t f;
	ssize_t n;
	ssize_t s;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	s = read(f, p, letters);
	n = write(STDOUT_FILENO, p, s);

	free(p);
	close(f);
	return (n);
}
