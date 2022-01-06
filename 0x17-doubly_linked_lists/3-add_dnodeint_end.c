#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Head of the list
 * @n: Value to add to the new node
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return (new_node);
}
