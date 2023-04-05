#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add node function
 * DESCRIPTION: a function that inserts a new node
 * at a given position
 * @head: pointer to node passed to the function
 * @idx: index where node should be added
 * @n: node value passed to the function
 * Return: a pointer to the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
	count++;
	temp = temp->next;
	}
	free(node);
	return (NULL);
}
