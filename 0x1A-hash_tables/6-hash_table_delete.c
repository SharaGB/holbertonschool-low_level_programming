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
        tmp = ht->array[index];
        while (tmp != NULL)
        {
            del_ht = tmp->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
            tmp = del_ht;
        }
        free(del_ht);
    }
    free(ht->array);
    free(ht);
}
