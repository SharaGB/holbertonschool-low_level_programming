#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node
 * @head: Pointer to the head of the list
 * @index: Index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = NULL;
	listint_t *current = NULL;

	if (!head || !*head)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (count < index)
	{
		current = tmp;
		tmp = tmp->next;

		if (current->next == NULL)
		{
			return (-1);
		}
		count++;
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
