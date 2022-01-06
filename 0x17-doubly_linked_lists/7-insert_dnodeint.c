#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Head of the list
 * @idx: Index of the list
 * @n: Value to add to the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	if (h == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (h != NULL && idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
	}
	tmp = *h;
	while (count < idx - 1)
	{
		if (tmp != NULL)
		{
			tmp = tmp->next;
		}
		count++;
	}
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	return (new_node);
}
