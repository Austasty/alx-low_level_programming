#include "main.h"

/**
 * swap_int - A function that concatenate two strings.
 * @dest: First character value
 * @src: Second character value
 * @n: third interger of n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
