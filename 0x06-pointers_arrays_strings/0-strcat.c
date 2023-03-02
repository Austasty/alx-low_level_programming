#include <stdio.h>
#include "main.h"

/**
 * _strcat - A function that append  characters to another
 *@dest: first character value
 *@src: second character value
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
