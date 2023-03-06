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
	int i;
	int j = 0;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i * (size + 1)];
		sum += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d \n", j, sum);
}
