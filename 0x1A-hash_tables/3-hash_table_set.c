#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Hash table you want to add or update the key/value.
 * @key: Is the key.
 * @value: alue associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
	{
		free(new);
		return (0);
	}
	if (strlen(key) == 0 || !ht || !ht->array || !ht->size)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	while (ht->array[index] && index < ht->size)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
			free(new);
			return (1);
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
			return (1);
		}
		index += 1;
	}
	if (ht->array[index] == NULL)
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
