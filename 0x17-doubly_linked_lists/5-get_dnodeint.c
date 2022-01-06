#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 * @head: Head of the list
 * @index: Index of the node
 * Return: If the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	while (count < index)
	{
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
		count++;
	}
	return (head);
}
