#include "lists.h"
/**
 * free_dlistint - Function that frees a list
 * @head: Head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
