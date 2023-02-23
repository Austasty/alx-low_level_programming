#include "main.h"

/**
 * print_alphabet_x10 - To print 10 times the alphabet.
 * Return: 0 Success
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x10alpha;

	while (i <= 9)
	{
	for (x10alpha = 'a'; x10alpha <= 'z'; x10alpha++)
	{
		_putchar(x10alpha);
	}
	_putchar('\n');
	i++;
	}
}
