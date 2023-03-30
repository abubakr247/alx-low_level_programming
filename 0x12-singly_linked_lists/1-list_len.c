#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - print length function
 * DESCRIPTION: a function that prints a linked list' length
 * @h: pointer passed to the function
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}
