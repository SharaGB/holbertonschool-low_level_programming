#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements in a linked list
 * @h: Head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
