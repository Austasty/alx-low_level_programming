#include <stdio.h>
#include "main.h"

/**
 * _strncpy - A function that append  characters to another
 *@dest: first character value
 *@src: second character value
 *@n: third interger of n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
