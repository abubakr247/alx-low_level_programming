#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - free allocated function
 * DESCRIPTION: a function that frees a linked list
 * @head: pointer to node passed to the function
 * Return: 0 for sucess
 */
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
