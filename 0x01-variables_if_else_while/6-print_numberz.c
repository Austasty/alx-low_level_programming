#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * A program that prints the numbers in base 10 starting from 0 using putchar
 * Return: 0 always (Success)
 */
int main(void)
{
	int num2;

	for (num2 = 0; num2 <= 9; num2++)
		putchar(num2 + '0');
	putchar('\n');
	return (0);
}
