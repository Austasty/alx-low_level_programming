#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Write a program that prints the alphabet in lowercase followed by a new line
*Return: 0
*/
int main(void)
{
char alphab;

for (alphab = 'a'; alphab <= 'z'; alphab++)
{
	if (alphab == 'q' || alphab == 'e')
		continue;
	putchar (alphab);
}
	putchar('\n');
	return (0);
}
