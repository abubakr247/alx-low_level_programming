#include "main.h"
#include <stdio.h>
#include "main.h"
/**
 * set_bit - set bit at index to 1
 * @n: pointer to the number that will set its bit
 * @index: the index of the bit will be set
 * Return: 1 success , -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < sizeof(*n) * 8)
	{
		for (i = 0; i <= index; i++)
		{
			if (index == i)
			{
				*n |= 1 << index;
				return (1);
			}
		}
	}
	return (-1);
}
