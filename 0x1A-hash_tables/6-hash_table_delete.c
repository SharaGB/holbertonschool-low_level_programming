#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *del_ht = NULL, *tmp = NULL;

	if (ht == NULL)
	{
		return;
	}
	for (index = 0; index < ht->size; index++)
	{
		del_ht = ht->array[index];
		while (del_ht != NULL)
		{
			tmp = del_ht->next;
			free(del_ht->key);
			free(del_ht->value);
			free(del_ht);
			del_ht = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
