#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest : the destination value
 * @src: the sourse value
 * @n: the limit of the concatenation
 *
 * Return: a pointer to the the resultine dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int w = 0, j = 0;

	while (dest[w])
	{
		w++;
	}

	while (j < n && src[j])
	{
		dest[w] = src[j];
		w++;
		j++;
	}
	dest[w + n + 1] = '\0';

	return (dest);
}
