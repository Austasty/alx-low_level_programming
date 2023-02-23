#include "main.h"

/**
 * _islower - To check for lowercase character
 * @c: Charactr to be checked
 * Return: 1 for lowercase or 0 otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
