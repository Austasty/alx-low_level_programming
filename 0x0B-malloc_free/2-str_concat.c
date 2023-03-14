#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i = 0, j, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j] || s2[j]; j++)
	{
		i++;
	}

	res = malloc((i) * sizeof(char));
	/* Allocates memory to res string */
	if (res == NULL)
	{
		return (NULL); /* Returns failed state */
	}
	for (j = 0; s1[j]; j++)
	{
		res[k++] = s1[j];
	} /* Copies contents of s1 to res string */
	for (j = 0; s2[j]; j++)
	{
		res[k++] = s2[j];
	} /* Copies contents of s2 to res string */

	return (res);
}
