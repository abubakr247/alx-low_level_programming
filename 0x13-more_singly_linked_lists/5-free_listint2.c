#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - free allocated function
 * DESCRIPTION: a function that frees a linked list
 * @head: pointer to node passed to the function
 * Return: 0 for sucess
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}
