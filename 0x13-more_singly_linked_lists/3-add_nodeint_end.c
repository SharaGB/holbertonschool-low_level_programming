#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end of a list
 * @head: Main node
 * @n: Value
 * Return: New element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new_node = malloc(sizeof(listint_t));

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
	else
	{
		tmp = *head;

		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}
