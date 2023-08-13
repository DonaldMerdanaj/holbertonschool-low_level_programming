#include "hash_tables.h"
#include <stdlib.h>
/**
 * free_nodes - function that deletes hash nodes
 * @node: pointer to node
 */
void free_nodes(hash_node_t *node)
{
	if (node == NULL)
		return;

	if (node->next != NULL)
	{
		free_nodes(node->next);
	}

		free(node->key);
		free(node->value);
		free(node);

}
/**
 *hash_table_delete - function that deletes a hash table
 *@ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;

	for (i = 0; i < (int) ht->size; i++)
		free_nodes(ht->array[i]);

	free(ht->array);
	free(ht);
}
