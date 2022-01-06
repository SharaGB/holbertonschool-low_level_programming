#include "lists.h"
/**
 * sum_dlistint - Sum of all the n of a list
 * @head: Head of the list
 * Return: The list or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
