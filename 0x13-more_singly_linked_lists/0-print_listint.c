#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print function
 * DESRPTION: a function that prints a linked list elements
 *
 * @h: pointer passed to the function
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t conut = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		conut++;
	}
	return (conut);
}
