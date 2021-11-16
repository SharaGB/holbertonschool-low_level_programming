#include "lists.h"
/**
 * free_listint - Function that frees a list
 * @head: Main node
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
