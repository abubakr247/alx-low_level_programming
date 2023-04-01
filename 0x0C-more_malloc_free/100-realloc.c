#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block
 * Description : a function that reallocates
 * a memory block using malloc and free
 * @ptr: a pointer to the memory previously
 * allocated with a call to malloc
 * @old_size: the size, in bytes, of the
 * allocated space for ptr
 * @new_size: the new size, in bytes of the
 * new memory block
 * Return: a pointer for the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr = NULL;
	char *p = NULL;
	char *pp = NULL;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p != NULL)
	{
		pp = (char *)ptr;
		for (i = 0; i < old_size; i++)
		{
			p[i] = pp[i];
		}
		free(ptr);
		return (p);
	}
	return (NULL);
}
