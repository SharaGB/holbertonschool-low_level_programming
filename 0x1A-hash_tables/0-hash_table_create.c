#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
	{
		free(new_ht);
		return (NULL);
	}
	new_ht->size = size;
	/* Establece el ptr para que apunte a un array dinámico de tamaño 'size' */
	new_ht->array = malloc(sizeof(hash_table_t *) * size);
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}
	while (i < new_ht->size) /* Initialization */
	{
		new_ht->array[i] = NULL;
		i += 1;
	}
	return (new_ht);
}
