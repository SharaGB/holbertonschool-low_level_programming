#include "lists.h"
/**
 * free_listint_safe - Function that frees a listint_t list.
 * @h: Head of linked list
 * Return: The size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int counter = 0;
	listint_t *tmp = *h, *tmp2 = NULL;

	if (*h == NULL || h == NULL)
		return (0);

	while (tmp)
	{
		counter++;
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
		if (tmp2 <= tmp)
			break;
	}
	*h = 0;
	return (counter);
}
