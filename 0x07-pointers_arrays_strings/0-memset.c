#include "main.h"
#include <stdio.h>

/**
 * _memset - prints a constant byte
 * @s: the first pointer to s
 * @b: the char to print
 * @n: an int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
	*ptr++ = b;
	}
	return (s);
}
