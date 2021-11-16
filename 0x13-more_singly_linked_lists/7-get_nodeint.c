#include "lists.h"
/**
 * get_nodeint_at_index - The nth node of a linked list
 * @head: Main node
 * @index: index of the node
 * Return: Node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	while (count < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		count++;
	}
	return (head);
}
