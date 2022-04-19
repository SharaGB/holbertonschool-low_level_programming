#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at idx of the list
 * @head: Head of the list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	while (current)
	{
		if (!current->next)
		{
			current->prev->next = NULL;
			return (1);
		}
		if (count == index)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			return (1);
		}
		count += 1;
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
