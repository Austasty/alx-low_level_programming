#include "main.h"
#include <stdio.h>

/**
 * _strchr - to locat a char in a string
 * @s: the first pointer to s
 * @c: the char to print
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return ('\0');
}
