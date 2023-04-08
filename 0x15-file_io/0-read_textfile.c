#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w - actual number of bytes read and printed
 *	0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t w;
	ssize_t r;
	FILE *ptr;

	ptr = fopen(filename, "r");
	if (ptr == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fileno(ptr), buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	fclose(ptr);
	if (w != r)
		return (0);
	return (w);
}
