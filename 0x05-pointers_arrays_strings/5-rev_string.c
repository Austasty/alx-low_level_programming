#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: The string variable
 * Return: string
 */

void rev_string(char *s)
{
	char abc;
	int i = 0;
	int j = 0;

	while (s[i])
		i++;
	while (i > j)
	{
		abc = s[--i];
		s[i] = s[j];
		s[j++] = abc;
	}
}
