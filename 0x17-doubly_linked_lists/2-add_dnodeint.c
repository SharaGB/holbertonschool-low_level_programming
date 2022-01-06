#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: Head od the list
 * @n: Value to add to the new node
 * Return: Address of a new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	if (!head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
