#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing multiple of an interger
 * @argc: counts the value
 * @argv: count the elments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		return (printf("Error\n"), 1);
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
