#include "lists.h"
/**
 * print_listint_safe - Function that prints a listint_t linked list.
 * @head: Head of list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int counter = 0, flag = 0;
	const listint_t *slow = NULL, *fast = NULL, *marker = NULL;

	if (head == NULL)
		return (0);
	marker = slow = head;
	fast = head->next;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
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
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		slow = slow->next;
	}
	return (counter);
}
