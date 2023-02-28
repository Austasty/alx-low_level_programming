#include "main.h"
/**
 * puts2 - To prints every other character of a string.
 * Starting with the first character, followed by a new line.
 * @str: The string variable
 * Return: String
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
