#include "lists.h"
/**
 * find_listint_loop - Function that finds the loop in a linked list.
 * @head: Head of the list
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	unsigned int counter = 0, flag = 0;
	const listint_t *slow = NULL, *fast = NULL, *marker = NULL;

	if (head == NULL)
		return (0);
	marker = slow = head;
	fast = head->next;
	while (head != NULL)
	{
		head = head->next;
		counter++;

		if (flag == 0 && fast != NULL && fast->next != NULL && slow != NULL)
		{
			if (fast == slow)
			{
				flag = 1;
				slow = marker;
			}
			fast = fast->next->next;
		}
		if (flag == 1 && slow == head)
			return (head);
		slow = slow->next;
	}
	return (NULL);
}
