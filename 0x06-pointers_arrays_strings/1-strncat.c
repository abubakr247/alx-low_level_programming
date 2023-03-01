#include "main.h"
/**
 * _strncat - concatenates two strings using at most
 *
 * ac inputted number of bytes form src.
 * @dest: The string to be appended.
 * @src: The string to be appended to dest.
 *@n: The number of bytes form src to be appended to dest.
 * Return: A pointer to the resulting dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int  i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);

}
