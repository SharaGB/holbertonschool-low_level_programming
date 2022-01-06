#include "lists.h"
/**
 * print_dlistint - Function that prints all elements of a dlistint list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
