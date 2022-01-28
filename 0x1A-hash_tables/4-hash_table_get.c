#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Hash table you want to look into.
 * @key: Is the key you are looking for.
 *
 * Return: Value the element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL;

	if (strlen(key) == 0 || !ht || !ht->array || !ht->size)
	{
		return (0);
	}
	index =  key_index((unsigned char *)key, ht->size);
	element = ht->array[index];
	if (ht->array[index] != NULL)
	{
		if (strcmp(element->key, key) == 0)
		{
			return (element->value);
		}
		element = element->next;
	}
	return (NULL);
}
