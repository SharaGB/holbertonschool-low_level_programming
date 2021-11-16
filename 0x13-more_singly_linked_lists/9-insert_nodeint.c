#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node
 * @head: Pointer to the head of the list
 * @idx: Index of the node
 * @n: Check n
 * Return: New node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *tmp = NULL;
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
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		tmp = *head;

		while (count < (idx - 1) && tmp->next)
		{
			tmp = tmp->next;

			if (!tmp)
				break;

			count++;
		}
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
