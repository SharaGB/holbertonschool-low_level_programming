#include "lists.h"
/**
 * free_dlistint - Function that frees a list
 * @head: Head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	dlistint_t *n;

	while (tmp)
	{
		n = tmp->next;
		free(tmp);
		tmp = n;
	}
}
