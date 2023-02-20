#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * A  program that prints all possible different combinations of two digits.
 * Return: 0 always
 */
int main(void)
{
	int i, p, n;

	for (i = '0'; i <= '9'; i++)
	for (p = '1'; p <= '9'; p++)
	for (n = i + p + 1; n <= '9'; n++)
	{
	if (n != i && n != p)
	putchar(i);
	putchar(p);
	putchar(n);
	if (i == '7' && p == '8' && n == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);

}
