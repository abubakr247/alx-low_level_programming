#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * reverse_listint - reverse function
 * DESCRIPTION: a function that reverses a listint_t linked list
 * @head: pointer to node passed to the function
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head, *prev = NULL, *next;

	while (node)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	*head = prev;
	return (*head);
}

