#include <stdio.h>

/**
 *main - that prints all arguments it receive
 *@argc: arguments to count
 *@argv: value of element
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
