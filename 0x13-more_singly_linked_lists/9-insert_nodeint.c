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
	listint_t *tmp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		*head = new_node;
		(*head)->next = tmp;
		return (*head);
	}
	else
	{
		while (count != idx)
		{
			if (count == (idx - 1))
			{
				new_node = tmp;
			}
			tmp = tmp->next;
			new_node->next = tmp;
			return (*head);
		}
	}
	return (new_node);
}
