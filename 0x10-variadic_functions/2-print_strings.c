#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code
 *@n: the start of numbers
 *@separator: the aurgument counter
 * Return: sum (interger)
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("nil");
		} else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
