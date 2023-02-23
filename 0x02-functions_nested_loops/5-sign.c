#include "main.h"

/**
 * print_sign - To prints the sign of a number.
 * Return: 1 and print + for n > 0 and 0 for n = 0 and -1 for n < 0
 * @n: value to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
