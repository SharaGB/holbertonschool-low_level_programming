#include "lists.h"
/**
 * free_listint2 - Function that frees a list
 * @head: Main node
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
