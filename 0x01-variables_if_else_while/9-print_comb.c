#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * A program that prints all possible combinations of single-digit numbers.
 * Return: 0 always
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
