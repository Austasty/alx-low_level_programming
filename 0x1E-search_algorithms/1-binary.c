#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer of first element of an array to search
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found.
 */

int binary_search(int *array, size_t size, int value)
{
	int lower, middle, highest;
	int y;

	if (array == NULL)
	{
		return (-1);
	}

	lower = 0;
	highest = size - 1;

	while (lower <= highest)
	{
		middle = (lower + highest) / 2;

		printf("Searching in array: ");
		for (y = lower; y <= highest; y++)
			printf("%i%s", array[y], y == highest ? "\n" : ", ");

		if (array[middle] < value)
			lower = middle + 1;
		else if (array[middle] > value)
			highest = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
