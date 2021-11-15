#include "lists.h"
/**
 * add_nodeint - Function that adds a new node
 * @head: Main node
 * @n: Value
 * Return: New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
