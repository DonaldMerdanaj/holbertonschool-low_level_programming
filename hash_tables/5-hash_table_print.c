#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints all hash table keys and pairs
 *@ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *it = NULL;
	int notfirst = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < (int) ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (notfirst)
				printf(", ");

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			notfirst = 1;
			if (ht->array[i]->next != NULL)
			{
				it = ht->array[i]->next;
				while (it != NULL)
				{
					printf(", ");
					printf("'%s': '%s'", it->key, it->value);
					it = it->next;
				}
			}
		}
	}
	printf("}\n");
}
