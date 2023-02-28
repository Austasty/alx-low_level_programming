#include "main.h"

/**
 * print_rev - To print a string in reverse
 * Followed by new line
 * @s: The string variable
 * Return: Str
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
