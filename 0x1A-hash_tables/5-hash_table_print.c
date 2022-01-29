#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Is the hash table.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, cm = 0;
	hash_node_t *print_ht = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		print_ht = ht->array[index];
		while (print_ht)
		{
			if (cm != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'",
				   print_ht->key, print_ht->value);

			print_ht = print_ht->next;
			cm = 1;
		}
		index += 1;
	}
	printf("}\n");
}
