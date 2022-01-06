#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at idx of the list
 * @head: Head of the list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = NULL;

	if (!head|| !*head)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (i < index)
	{
		current = current->next;

		if (current->next == NULL)
		{
			return (-1);
		}
		i++;
	}
	current->prev->next = current->next;
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
