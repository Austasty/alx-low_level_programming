#include "main.h"
/**
 * print_array - To print n elements of an array of integers
 * @a: The array integer
 * @n: The number of elements to be printed
 * Return: int
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
