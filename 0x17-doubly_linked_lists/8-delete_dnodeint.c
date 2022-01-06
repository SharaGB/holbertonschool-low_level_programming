#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at idx of the list
 * @head: Head of the list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = NULL;

	if (!head || !*head)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (count < index)
	{
		tmp = tmp->next;

		if (!tmp->next)
		{
			return (-1);
		}
		count++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
