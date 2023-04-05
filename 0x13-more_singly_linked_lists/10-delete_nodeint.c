#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node function
 * DESCRIPTION: a function that deletes the node at
 * index index of a listint_t linked list
 * @head: pointer to node passed to the function
 * @index: index of node to be deleted
 * Return: 1 for sucess or -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (node && i < index)
	{
		prev = node;
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);
	prev->next = node->next;
	free(node);
	return (1);
}

