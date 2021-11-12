#include "lists.h"
/**
 * free_list - Function that fress a list
 * @head: Main node
 * Return: Head
 */
void free_list(list_t *head)
{
	list_t *tmp, *n;

	tmp = head;
	while (tmp)
	{
		n = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = n;
	}
}
