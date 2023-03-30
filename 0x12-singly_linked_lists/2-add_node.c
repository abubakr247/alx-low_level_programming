#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add node function
 * DESCRIPTION: a function that add a new node
 * at the first of a linked list
 * @head: pointer to node passed to the function
 * @str: pointer the string passed to the function
 * Return: a pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

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
	node->next = *head;
	*head = node;

	return (node);
}
