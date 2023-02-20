#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * A program that prints all possible combinations of single-digit numbers.
 * Return: 0 always
 */
int main(void)
{
	int n;
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
