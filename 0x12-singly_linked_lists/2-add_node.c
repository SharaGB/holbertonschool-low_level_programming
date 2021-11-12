#include "lists.h"
/**
 * add_node - Adds a new node
 * @head: Main node
 * @str: Check str
 * Return: Adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * _strlen - The length of a string
 * @s: Check the string
 *
 * Return: Always 0
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
