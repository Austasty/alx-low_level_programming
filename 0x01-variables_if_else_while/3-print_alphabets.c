#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the alphabet in lowercase, and uppercase using putchar
 * Return: 0 always
 */
int main(void)
{
	char alpha, ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
		putchar(ALPHA);
	putchar('\n');
	return (0);
}