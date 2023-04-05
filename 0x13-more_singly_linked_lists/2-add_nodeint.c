#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of the list
 * @head: address of the pointer that holds the head of the list
 * @n: value of the node
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
