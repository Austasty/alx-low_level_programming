#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array of integers 
 * with a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t lower, higher, Grea;

	if (!array || size == 0)
		return (-1);

	Grea = sqrt(size);

	for (higher = 0; higher < size && array[higher] < value;
	     lower = higher, higher += Grea)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       higher, array[higher]);
	}

	/* when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", lower, higher);

	for (; lower <= min(higher, size - 1); lower++)
	{
		printf("Value checked array[%lu] = [%d]\n", lower, array[lower]);
		if (array[lower] == value)
			return (lower);
	}

	return (-1);
}
