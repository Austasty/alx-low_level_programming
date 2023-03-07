#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonal arrays
 * @a: interger pinter to a
 * @size: an interger
 * Return: int
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
