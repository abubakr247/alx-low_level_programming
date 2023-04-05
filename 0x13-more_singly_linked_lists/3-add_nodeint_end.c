#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - Adds node into the last
 * @head: pointer to what head points to
 * @n: number type int
 * Return: node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ret_list;

	temp = (*head);
	ret_list = malloc(sizeof(listint_t));
	if (!ret_list)
	{
		return (NULL);
	}
	ret_list->n = n;
	ret_list->next = NULL;
	if (*head == NULL)
	{
		*head = ret_list;
		return (ret_list);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = ret_list;

	return (ret_list);
}
