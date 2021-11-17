#include "lists.h"

/**
 * reverse_listint - Function that reverses a list
 * @head: Pointer to the head of the list
 * Return: ptr
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = NULL;

	if (!*head)
	{
		return (NULL);
	}
	if (*head)
	{
		previous = *head;
		current = (*head)->next;
		*head = (*head)->next;

		previous->next = NULL;
		while (*head != NULL)
		{
			*head = (*head)->next;
			current->next = previous;
			previous = current;
			current = *head;
		}
	}
	*head = previous;

	return (*head);
}
