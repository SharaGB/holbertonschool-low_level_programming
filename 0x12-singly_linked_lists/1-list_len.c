#include "lists.h"
/**
 * list_len - Returb the number of elements
 * @h: Value pointer
 * Return: Number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
