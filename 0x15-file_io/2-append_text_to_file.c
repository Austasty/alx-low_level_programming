#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Read text file print to STDOUT.
 * @filename: text file being read
 * @text_content: number of letters to be read
 * Return: 1 - on success
 *	-1 when function fails or filename is NULL.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr = fopen(filename, "a");

	if (filename == NULL)
		return (-1);

	if (ptr == NULL)
		return (-1);

	if (text_content != NULL)
	{
		size_t i = strlen(text_content);

		if (fwrite(text_content, sizeof(char), i, ptr) != i)
		{
			fclose(ptr);
			return (-1);
		}
	}
	fclose(ptr);
	return (1);
}
