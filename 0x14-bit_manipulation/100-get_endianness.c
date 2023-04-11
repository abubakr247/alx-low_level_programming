#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - Entry Point
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char *)&n;

	if (!*ptr)
	{
		n = 0;
	}
	return (n);
}
