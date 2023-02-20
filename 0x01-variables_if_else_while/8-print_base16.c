#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 always
 */
int main(void)
{
	char alph;
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
