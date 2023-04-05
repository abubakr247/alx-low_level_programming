#include "lists.h"
/**
 * get_nodeint_at_index- returns node in given index
 * @head: pointer to int list
 * @index: meant index to be searched
 * Return: node at given index or NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *retlis;
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
		{
			retlis = head;
			return (retlis);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
