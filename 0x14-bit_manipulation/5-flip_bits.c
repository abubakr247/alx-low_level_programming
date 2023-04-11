#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - check function
 * DESCRIPTION: a function that returns the number
 * of bits you would need to flip to get from one number to another
 * @n: decimal number represent the desired result
 * @m: the number that we want it to be equal to m
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}

	return (count);

}
