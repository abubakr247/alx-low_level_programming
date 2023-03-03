#include "main.h"
#include <stdio.h>

/**
 * _strcat - concenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int w = 0, i;

	while (dest[w])
	{
		w++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[w] = src[i];
		w++;
	}
	dest[w] = '\0';
	return (dest);
}
