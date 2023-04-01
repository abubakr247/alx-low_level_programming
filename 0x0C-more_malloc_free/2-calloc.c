#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - array allocate
 * Description : a function that allocates
 * memory for an array, using malloc
 * @nmemb: The number of array elements
 * @size: The bytes size
 * Return: a pointer to the array or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	arr = (int *)malloc(size * nmemb);
	ptr = (char *)arr;
	if (ptr == NULL)
		return (NULL);
		else
	{
		for (i = 0; i < nmemb * size; i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
}
