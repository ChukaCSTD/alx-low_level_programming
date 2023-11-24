#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cbit = 0;
	unsigned long int curr;
	unsigned long int x = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curr = x >> a;
		if (curr & 1)
			cbit++;
	}

	return (cbit);
}
