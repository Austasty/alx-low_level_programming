#include "main.h"
#include <stdio>

/**
 * create_array - the fumction entry point.
 * @size - the variable for array
 * @c - character to use
 * return 0;
 */

char *create_array(unsigned int size, char c){

	char *str;
		
	unsigned int i;
		
	str = malloc(sizeof(char) * size);
		
	if (size == 0 || str == NULL)
		
		return (NULL);
		
	for (i = 0; i < size; i++)
		
		str[i] = c;
		
	return (str);
}
