#include "main.h"

/**
 * times_table - To calculate 9 times table
 * Return: nnull output
 */

void times_table(void)
{
	int i, n, x, y, z;

	for (i = 0; i <= 9; i++)
	{
	for (n = 0; n <= 9; n++)
	{
		x = i * n;
	if (x > 9)
	{
		y = x % 10;
		z = (x - y) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(z + '0');
		_putchar(y + '0');
	}
	else
	{
	if (n != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(x + '0');
	}
	}
	_putchar('\n');
	}
}
