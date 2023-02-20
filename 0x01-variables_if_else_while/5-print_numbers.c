#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * A program that prints the numbers in base 10 starting from 0
 * Return: 0 always (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
