#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory
 * @str: character
 *
 * Return: The pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
	char *dupl;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	dupl = malloc((len + 1) * sizeof(char));

	if (dupl == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dupl[i] = str[i];
	}
	dupl[len] = '\0';
	return (dupl);

}
