#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code
 *@n: the start of numbers
 *@separator: the aurgument counter
 * Return: sum (interger)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_args(args, int));
		if (separator != NULL && i != n - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(args)
	printf("\n");
}
