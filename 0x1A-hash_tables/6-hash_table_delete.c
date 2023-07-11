#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *hat)
{
	hash_table_t *head = hat;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < hat->size; i++)
	{
		if (hat->array[i] != NULL)
		{
			node = hat->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
