#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: prints the pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;

	return (len);
}
