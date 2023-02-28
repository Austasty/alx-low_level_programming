#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: First integer value
 * @b: Second integer value
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int value = *a;
	*a = *b;
	*b = value;
}
