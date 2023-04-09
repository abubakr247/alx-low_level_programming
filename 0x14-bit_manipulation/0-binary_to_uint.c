#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0s and 1s
 * Return: the converted number or 0 if its failed
 */

unsigned int binary_to_uint(const char *b)
{
	int a, o, e;
	unsigned int number = 0;

	if (!b || !*b)
		return (0);
	a = 0;
	while (b[a] != '\0')
		a++;
	o = 1;
	e = 0;
	while (a > 0)
	{
		if (b[a - 1] != '0' && b[a - 1] != '1')
			return (0);
		if (e == 0)
		{
			number += (b[a - 1] - '0') * o;
			e = 2;
			a--;
		} else
		{
			number += (b[a - 1] - '0') * e;
			e *= 2;
			a--;
		}
	}

	return (number);
}
