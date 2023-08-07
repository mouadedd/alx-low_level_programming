#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * allo_buf - allocate 1024 bytes
 * @f: name of the buffer's file
 * Return: A pointer to the buffer
 */
char *allo_buf(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buf);
}
/**
 * close_file - Close file
 * @ftc: file to close
 */
void close_file(int ftc)
{
	int cf;

	cf = close(ftc);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftc);
		exit(100);
	}
}

/**
 * main - Copie from a file to another
 * @argc: number of arguments
 * @argv: pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *buf;
int f;
int t;
int r;
int s;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = allo_buf(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		s = write(t, buf, r);
		if (t == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(f, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close_file(f);
	close_file(t);
	return (0);
}
