#include "main.h"

/**
 * flip_bits - bits to change
 * 
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int A;
	unsigned long int B = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		A = B >> i;
		if (A & 1)
			count++;
	}

	return (count);
}
