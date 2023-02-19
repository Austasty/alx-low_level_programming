#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * A program that prints the lowercase in reverse using putchar
 * Return: 0 always (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');
	return (0);
}
