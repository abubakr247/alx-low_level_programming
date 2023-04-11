#include "main.h"

/**
 * set_bit - set bit at index to 1
 * @n: pointer to the number that will set its bit
 * @index: the index of the bit will be set
 * Return: 1 success , -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit = 1;

	if (index > 64 || n == NULL)
		return (-1);
	setbit = setbit << index;
	*n = (*n) | setbit;
	return (1);
}
