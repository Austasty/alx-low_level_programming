#include <stdio.h>
#include "main.h"
/**
 *_isdigit - checks if a value is alphabet or number
 *@c: the interger used in my code
 *Return: 1 if True and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
