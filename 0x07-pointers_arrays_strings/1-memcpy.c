#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints a constant byte
 * @dest: the first pointer to s
 * @src: the char to print
 * @n: an int
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- > 0)
	{
		*dest++ = *src++;
	}
	return (dest);
}
