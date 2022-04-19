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

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	while (count < index && *head != NULL)
	{
		*head = (*head)->next;
		count++;
	}
	if (count != index || *head == NULL)
	{
		*head = current;
		return (-1);
	}
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
	else
	{
		(*head)->prev->next = (*head)->next;
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		free(*head);
		*head = current;
	}
	return (1);
}
