#include "main.h"

/**
 * owner: OBWOGO TOM
 * flip_bits - returns the number of bits you would need to flip
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	int i = 0;

	p = n ^ m;
	while (p >= 1)
	{
		if ((p & 1) == 1)
		i++;
		p >>= 1;
	}
	return (i);
}
