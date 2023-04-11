#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set bit function
 * DESCRIPTION: a function that sets the
 * value of a bit to 0 at a given index
 * @n: a pointer to the decimal number
 * @index: the bit index to be set
 * Return: 1 if it works or -1 if an error found
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < sizeof(*n) * 8)
	{
		for (i = 0; i <= index; i++)
		{
			if (index == i)
			{
				*n &= ~(1 << index);
				return (1);
			}
		}
	}
	return (-1);
}
