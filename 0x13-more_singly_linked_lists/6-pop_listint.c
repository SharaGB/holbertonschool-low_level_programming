#include "lists.h"
/**
 * pop_listint - Function that deletes the head node
 * @head: Main node
 * Return: Head node's (aux)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int aux;

	if (!*head)
	{
		return (0);
	}
	tmp = (*head)->next;
	aux = (*head)->n;
	free(*head);
	*head = tmp;

	return (aux);
}
