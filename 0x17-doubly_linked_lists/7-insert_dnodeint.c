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
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	tmp = *h;
	for (count = 1; tmp; count++)
	{
		if (count == idx)
		{
			if (!tmp->next)
			{
				new_node = add_dnodeint_end(h, n);
			}
			else
			{
				if (tmp)
				{
					new_node->n = n;
					new_node->next = tmp->next;
					new_node->prev = tmp;
					tmp->next->prev = new_node;
					tmp->next = new_node;
				}
			}
		}
		tmp = tmp->next;
	}
return (new_node);
}
