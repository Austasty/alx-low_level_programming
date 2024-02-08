#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array of integers
 * with an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is Empty
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lower = 0;
	size_t higher = size - 1;
	size_t greater;

	if (!array)
		return (-1);

	while ((array[higher] != array[lower]) &&
	       (value >= array[lower]) && (value <= array[higher]))
	{
		greater = lower + (((double)(higher - lower) / (array[higher] - array[lower]))
			    * (value - array[lower]));
		printf("Value checked array[%lu] = [%d]\n", greater, array[greater]);
		if (array[greater] < value)
			lower = greater + 1;
		else if (value < array[greater])
			higher = greater - 1;
		else
			return (greater);
	}
	if (value == array[lower])
	{
		printf("Value checked array[%lu] = [%d]\n", lower, array[lower]);
		return (lower);
	}
	greater = lower + (((double)(higher - lower) / (array[higher] - array[lower]))
		     * (value - array[lower]));
	printf("Value checked array[%lu] is out of range\n", greater);
	return (-1);
}
