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
	unsigned long int i = key_index((unsigned char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
	{
		free(new);
		return (0);
	}
	if (!strlen(key) || !ht || !ht->array || !ht->size)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	while (ht->array[i] && i < ht->size)
	{
		if (ht->array[i]->key == key)
		{
			ht->array[i]->value = strdup(value);
			free(new);
			return (1);
		}
		else
		{
			new->next = ht->array[i];
			ht->array[i] = new;
			return (1);
		}
		i += 1;
	}
	if (ht->array[i] == 0)
	{
		ht->array[i] = new;
	}
	return (1);
}
