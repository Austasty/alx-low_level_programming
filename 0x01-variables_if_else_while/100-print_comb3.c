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
	int i, num;

	for (i = '0'; i <= '9'; i++)
	for (num = i + 1; num <= '9'; num++)
	{
	if (num != i)
	putchar(i);
	putchar(num);
	if (i == '8' && num == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);

}
