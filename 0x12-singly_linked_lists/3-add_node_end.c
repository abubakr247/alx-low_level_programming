#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node function
 * DESCRIPTION: a function that add a new node
 * at the end of a linked list
 * @head: pointer to node passed to the function
 * @str: pointer the string passed to the function
 * Return: a pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	} else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
	}
	return (node);
}
